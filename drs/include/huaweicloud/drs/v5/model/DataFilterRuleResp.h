
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterRuleResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterRuleResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/GeneralDataFilterResp.h>
#include <huaweicloud/drs/v5/model/DataFilterObjectResp.h>
#include <vector>
#include <huaweicloud/drs/v5/model/DataFilteringAdvancedSetting.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据过滤规则响应体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DataFilterRuleResp
    : public ModelBase
{
public:
    DataFilterRuleResp();
    virtual ~DataFilterRuleResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataFilterRuleResp members

    /// <summary>
    /// 数据过滤规则批次ID，标识同一批次内的多个过滤对象属于同一个规则配置。
    /// </summary>

    int64_t getBatchId() const;
    bool batchIdIsSet() const;
    void unsetbatchId();
    void setBatchId(int64_t value);

    /// <summary>
    /// 过滤对象信息列表，列出此规则下所有需进行数据过滤的具体数据库对象
    /// </summary>

    std::vector<DataFilterObjectResp>& getFilterObjectList();
    bool filterObjectListIsSet() const;
    void unsetfilterObjectList();
    void setFilterObjectList(const std::vector<DataFilterObjectResp>& value);

    /// <summary>
    /// 
    /// </summary>

    GeneralDataFilterResp getFilterRulesResp() const;
    bool filterRulesRespIsSet() const;
    void unsetfilterRulesResp();
    void setFilterRulesResp(const GeneralDataFilterResp& value);

    /// <summary>
    /// 
    /// </summary>

    DataFilteringAdvancedSetting getAdvancedSettingResp() const;
    bool advancedSettingRespIsSet() const;
    void unsetadvancedSettingResp();
    void setAdvancedSettingResp(const DataFilteringAdvancedSetting& value);


protected:
    int64_t batchId_;
    bool batchIdIsSet_;
    std::vector<DataFilterObjectResp> filterObjectList_;
    bool filterObjectListIsSet_;
    GeneralDataFilterResp filterRulesResp_;
    bool filterRulesRespIsSet_;
    DataFilteringAdvancedSetting advancedSettingResp_;
    bool advancedSettingRespIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterRuleResp_H_
