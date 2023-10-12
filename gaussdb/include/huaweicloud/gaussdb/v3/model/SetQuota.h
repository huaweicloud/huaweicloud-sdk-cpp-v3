
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetQuota_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetQuota_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetQuota
    : public ModelBase
{
public:
    SetQuota();
    virtual ~SetQuota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetQuota members

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 实例个数配额。取值范围0~100000。(如果已经存在实例，应该大于已经存在的实例个数)
    /// </summary>

    int32_t getInstanceQuota() const;
    bool instanceQuotaIsSet() const;
    void unsetinstanceQuota();
    void setInstanceQuota(int32_t value);

    /// <summary>
    /// CPU核数配额。取值范围0~2147483646。(如果已经存在实例，应该大于已经占用的cpu个数)
    /// </summary>

    int32_t getVcpusQuota() const;
    bool vcpusQuotaIsSet() const;
    void unsetvcpusQuota();
    void setVcpusQuota(int32_t value);

    /// <summary>
    /// 内存使用配额，单位为GB。取值范围0~2147483646。(如果已经存在实例，应该大于已经占用的内存数)
    /// </summary>

    int32_t getRamQuota() const;
    bool ramQuotaIsSet() const;
    void unsetramQuota();
    void setRamQuota(int32_t value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int32_t instanceQuota_;
    bool instanceQuotaIsSet_;
    int32_t vcpusQuota_;
    bool vcpusQuotaIsSet_;
    int32_t ramQuota_;
    bool ramQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetQuota_H_
