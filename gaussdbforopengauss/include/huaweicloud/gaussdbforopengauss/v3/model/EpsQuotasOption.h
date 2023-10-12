
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EpsQuotasOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EpsQuotasOption_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  EpsQuotasOption
    : public ModelBase
{
public:
    EpsQuotasOption();
    virtual ~EpsQuotasOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EpsQuotasOption members

    /// <summary>
    /// 企业项目Id。
    /// </summary>

    std::string getEnterpriseProjectsId() const;
    bool enterpriseProjectsIdIsSet() const;
    void unsetenterpriseProjectsId();
    void setEnterpriseProjectsId(const std::string& value);

    /// <summary>
    /// 实例的配额。取值范围：实际创建的实例个数 ~ 100,000。
    /// </summary>

    int32_t getInstanceQuota() const;
    bool instanceQuotaIsSet() const;
    void unsetinstanceQuota();
    void setInstanceQuota(int32_t value);

    /// <summary>
    /// cpu的配额。取值范围：实际使用的cpu核数 ~ 2,147,483,646。
    /// </summary>

    int32_t getVcpusQuota() const;
    bool vcpusQuotaIsSet() const;
    void unsetvcpusQuota();
    void setVcpusQuota(int32_t value);

    /// <summary>
    /// 内存的配额。单位GB。取值范围：实际使用的内存 ~ 2,147,483,646。
    /// </summary>

    int32_t getRamQuota() const;
    bool ramQuotaIsSet() const;
    void unsetramQuota();
    void setRamQuota(int32_t value);

    /// <summary>
    /// 存储空间的配额。单位：GB。取值范围：实际使用的存储空间 ~ 2,147,483,646。
    /// </summary>

    int32_t getVolumeQuota() const;
    bool volumeQuotaIsSet() const;
    void unsetvolumeQuota();
    void setVolumeQuota(int32_t value);


protected:
    std::string enterpriseProjectsId_;
    bool enterpriseProjectsIdIsSet_;
    int32_t instanceQuota_;
    bool instanceQuotaIsSet_;
    int32_t vcpusQuota_;
    bool vcpusQuotaIsSet_;
    int32_t ramQuota_;
    bool ramQuotaIsSet_;
    int32_t volumeQuota_;
    bool volumeQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EpsQuotasOption_H_
