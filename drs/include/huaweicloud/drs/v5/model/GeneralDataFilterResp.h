
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_GeneralDataFilterResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_GeneralDataFilterResp_H_


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
/// 数据过滤对象响应体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  GeneralDataFilterResp
    : public ModelBase
{
public:
    GeneralDataFilterResp();
    virtual ~GeneralDataFilterResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GeneralDataFilterResp members

    /// <summary>
    /// 源数据库的过滤条件SQL表达式。
    /// </summary>

    std::string getSourceFilterCondition() const;
    bool sourceFilterConditionIsSet() const;
    void unsetsourceFilterCondition();
    void setSourceFilterCondition(const std::string& value);

    /// <summary>
    /// 目标数据库的过滤条件SQL表达式。
    /// </summary>

    std::string getTargetFilterCondition() const;
    bool targetFilterConditionIsSet() const;
    void unsettargetFilterCondition();
    void setTargetFilterCondition(const std::string& value);

    /// <summary>
    /// 标记源库和目标库过滤条件是否分开配置。
    /// </summary>

    std::string getConditionSeparated() const;
    bool conditionSeparatedIsSet() const;
    void unsetconditionSeparated();
    void setConditionSeparated(const std::string& value);


protected:
    std::string sourceFilterCondition_;
    bool sourceFilterConditionIsSet_;
    std::string targetFilterCondition_;
    bool targetFilterConditionIsSet_;
    std::string conditionSeparated_;
    bool conditionSeparatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_GeneralDataFilterResp_H_
