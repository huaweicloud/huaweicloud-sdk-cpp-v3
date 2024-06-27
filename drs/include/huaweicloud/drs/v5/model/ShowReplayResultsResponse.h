
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayResultsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayResultsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ReplayingSqlResp.h>
#include <huaweicloud/drs/v5/model/ReplayErrorSqlTemplateResp.h>
#include <huaweicloud/drs/v5/model/ReplayShardStaticsResp.h>
#include <huaweicloud/drs/v5/model/ReplaySlowSqlTemplateResp.h>
#include <huaweicloud/drs/v5/model/ReplayErrorClassification.h>
#include <vector>
#include <huaweicloud/drs/v5/model/ReplayErrorSqlResp.h>
#include <huaweicloud/drs/v5/model/ReplaySlowSqlResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowReplayResultsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplayResultsResponse();
    virtual ~ShowReplayResultsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReplayResultsResponse members

    /// <summary>
    /// 数据总量
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 回放基于时间统计详细信息列表，在type为shard_statistics时返回
    /// </summary>

    std::vector<ReplayShardStaticsResp>& getShardStatics();
    bool shardStaticsIsSet() const;
    void unsetshardStatics();
    void setShardStatics(const std::vector<ReplayShardStaticsResp>& value);

    /// <summary>
    /// 慢SQL信息列表，在type为slow_sql时返回
    /// </summary>

    std::vector<ReplaySlowSqlResp>& getSlowSqls();
    bool slowSqlsIsSet() const;
    void unsetslowSqls();
    void setSlowSqls(const std::vector<ReplaySlowSqlResp>& value);

    /// <summary>
    /// 慢SQL统计信息列表，在type为slow_sql_template时返回
    /// </summary>

    std::vector<ReplaySlowSqlTemplateResp>& getSlowSqlTemplates();
    bool slowSqlTemplatesIsSet() const;
    void unsetslowSqlTemplates();
    void setSlowSqlTemplates(const std::vector<ReplaySlowSqlTemplateResp>& value);

    /// <summary>
    /// 异常SQL信息列表，在type为error_sql时返回
    /// </summary>

    std::vector<ReplayErrorSqlResp>& getErrorSqls();
    bool errorSqlsIsSet() const;
    void unseterrorSqls();
    void setErrorSqls(const std::vector<ReplayErrorSqlResp>& value);

    /// <summary>
    /// 异常SQL统计信息列表，在type为error_sql_template时返回
    /// </summary>

    std::vector<ReplayErrorSqlTemplateResp>& getErrorSqlTemplates();
    bool errorSqlTemplatesIsSet() const;
    void unseterrorSqlTemplates();
    void setErrorSqlTemplates(const std::vector<ReplayErrorSqlTemplateResp>& value);

    /// <summary>
    /// 正在回放SQL信息列表，在type为replaying_sql时返回
    /// </summary>

    std::vector<ReplayingSqlResp>& getReplayingSqls();
    bool replayingSqlsIsSet() const;
    void unsetreplayingSqls();
    void setReplayingSqls(const std::vector<ReplayingSqlResp>& value);

    /// <summary>
    /// 回放异常SQL分类信息，在type为error_classification时返回
    /// </summary>

    std::vector<ReplayErrorClassification>& getErrorClassifications();
    bool errorClassificationsIsSet() const;
    void unseterrorClassifications();
    void setErrorClassifications(const std::vector<ReplayErrorClassification>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ReplayShardStaticsResp> shardStatics_;
    bool shardStaticsIsSet_;
    std::vector<ReplaySlowSqlResp> slowSqls_;
    bool slowSqlsIsSet_;
    std::vector<ReplaySlowSqlTemplateResp> slowSqlTemplates_;
    bool slowSqlTemplatesIsSet_;
    std::vector<ReplayErrorSqlResp> errorSqls_;
    bool errorSqlsIsSet_;
    std::vector<ReplayErrorSqlTemplateResp> errorSqlTemplates_;
    bool errorSqlTemplatesIsSet_;
    std::vector<ReplayingSqlResp> replayingSqls_;
    bool replayingSqlsIsSet_;
    std::vector<ReplayErrorClassification> errorClassifications_;
    bool errorClassificationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayResultsResponse_H_
