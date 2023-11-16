
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_PolicyResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_PolicyResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略响应
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  PolicyResponse
    : public ModelBase
{
public:
    PolicyResponse();
    virtual ~PolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyResponse members

    /// <summary>
    /// id
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
    /// 防护包名
    /// </summary>

    std::string getPackageName() const;
    bool packageNameIsSet() const;
    void unsetpackageName();
    void setPackageName(const std::string& value);

    /// <summary>
    /// 策略名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 所属region的id
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 清洗阈值
    /// </summary>

    int32_t getCleanThreshold() const;
    bool cleanThresholdIsSet() const;
    void unsetcleanThreshold();
    void setCleanThreshold(int32_t value);

    /// <summary>
    /// 防护ip数
    /// </summary>

    int32_t getNumProtectedIp() const;
    bool numProtectedIpIsSet() const;
    void unsetnumProtectedIp();
    void setNumProtectedIp(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string packageId_;
    bool packageIdIsSet_;
    std::string packageName_;
    bool packageNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string region_;
    bool regionIsSet_;
    int32_t cleanThreshold_;
    bool cleanThresholdIsSet_;
    int32_t numProtectedIp_;
    bool numProtectedIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_PolicyResponse_H_
