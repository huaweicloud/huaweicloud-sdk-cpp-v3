
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowPolicyResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowPolicyResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/PopPolicy.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ShowPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPolicyResponse();
    virtual ~ShowPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPolicyResponse members

    /// <summary>
    /// 策略id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 防护包id
    /// </summary>

    std::string getPackageId() const;
    bool packageIdIsSet() const;
    void unsetpackageId();
    void setPackageId(const std::string& value);

    /// <summary>
    /// 策略名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 清洗阈值
    /// </summary>

    int32_t getCleanThreshold() const;
    bool cleanThresholdIsSet() const;
    void unsetcleanThreshold();
    void setCleanThreshold(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PopPolicy getPopPolicy() const;
    bool popPolicyIsSet() const;
    void unsetpopPolicy();
    void setPopPolicy(const PopPolicy& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string packageId_;
    bool packageIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t cleanThreshold_;
    bool cleanThresholdIsSet_;
    PopPolicy popPolicy_;
    bool popPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowPolicyResponse_H_
