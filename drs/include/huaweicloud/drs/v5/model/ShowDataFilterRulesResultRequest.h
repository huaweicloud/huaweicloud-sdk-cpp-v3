
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilterRulesResultRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilterRulesResultRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowDataFilterRulesResultRequest
    : public ModelBase
{
public:
    ShowDataFilterRulesResultRequest();
    virtual ~ShowDataFilterRulesResultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDataFilterRulesResultRequest members

    /// <summary>
    /// 数据迁移任务ID，用于指定要查询过滤规则的目标任务。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 查询数据过滤规则结果请求ID，用于关联之前提交的查询过滤校验请求。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDataFilterRulesResultRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDataFilterRulesResultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilterRulesResultRequest_H_
