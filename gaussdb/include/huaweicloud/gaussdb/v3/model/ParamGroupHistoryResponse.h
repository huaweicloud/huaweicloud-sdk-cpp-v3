
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParamGroupHistoryResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParamGroupHistoryResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ParamGroupHistoryResponse
    : public ModelBase
{
public:
    ParamGroupHistoryResponse();
    virtual ~ParamGroupHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParamGroupHistoryResponse members

    /// <summary>
    /// 参数名称。
    /// </summary>

    std::string getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetparameterName();
    void setParameterName(const std::string& value);

    /// <summary>
    /// 修改前参数值。
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);

    /// <summary>
    /// 修改后参数值。
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 更新结果。
    /// </summary>

    std::string getUpdateResult() const;
    bool updateResultIsSet() const;
    void unsetupdateResult();
    void setUpdateResult(const std::string& value);

    /// <summary>
    /// 是否应用。 - true：是。 - false：否。
    /// </summary>

    bool isIsApplied() const;
    bool isAppliedIsSet() const;
    void unsetisApplied();
    void setIsApplied(bool value);

    /// <summary>
    /// 修改时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 应用时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getApplied() const;
    bool appliedIsSet() const;
    void unsetapplied();
    void setApplied(const std::string& value);


protected:
    std::string parameterName_;
    bool parameterNameIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    std::string updateResult_;
    bool updateResultIsSet_;
    bool isApplied_;
    bool isAppliedIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string applied_;
    bool appliedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParamGroupHistoryResponse_H_
