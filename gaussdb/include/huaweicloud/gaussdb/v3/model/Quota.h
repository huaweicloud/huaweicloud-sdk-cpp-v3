
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Quota_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Quota_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  Quota
    : public ModelBase
{
public:
    Quota();
    virtual ~Quota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Quota members

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 企业项目名称。
    /// </summary>

    std::string getEnterpriseProjectName() const;
    bool enterpriseProjectNameIsSet() const;
    void unsetenterpriseProjectName();
    void setEnterpriseProjectName(const std::string& value);

    /// <summary>
    /// 实例个数配额。
    /// </summary>

    int32_t getInstanceQuota() const;
    bool instanceQuotaIsSet() const;
    void unsetinstanceQuota();
    void setInstanceQuota(int32_t value);

    /// <summary>
    /// CPU核数配额。
    /// </summary>

    int32_t getVcpusQuota() const;
    bool vcpusQuotaIsSet() const;
    void unsetvcpusQuota();
    void setVcpusQuota(int32_t value);

    /// <summary>
    /// 内存使用配额，单位为GB。
    /// </summary>

    int32_t getRamQuota() const;
    bool ramQuotaIsSet() const;
    void unsetramQuota();
    void setRamQuota(int32_t value);

    /// <summary>
    /// 实例剩余配额。
    /// </summary>

    int32_t getAvailabilityInstanceQuota() const;
    bool availabilityInstanceQuotaIsSet() const;
    void unsetavailabilityInstanceQuota();
    void setAvailabilityInstanceQuota(int32_t value);

    /// <summary>
    /// CPU核数剩余配额。
    /// </summary>

    int32_t getAvailabilityVcpusQuota() const;
    bool availabilityVcpusQuotaIsSet() const;
    void unsetavailabilityVcpusQuota();
    void setAvailabilityVcpusQuota(int32_t value);

    /// <summary>
    /// 内存剩余配额。
    /// </summary>

    int32_t getAvailabilityRamQuota() const;
    bool availabilityRamQuotaIsSet() const;
    void unsetavailabilityRamQuota();
    void setAvailabilityRamQuota(int32_t value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string enterpriseProjectName_;
    bool enterpriseProjectNameIsSet_;
    int32_t instanceQuota_;
    bool instanceQuotaIsSet_;
    int32_t vcpusQuota_;
    bool vcpusQuotaIsSet_;
    int32_t ramQuota_;
    bool ramQuotaIsSet_;
    int32_t availabilityInstanceQuota_;
    bool availabilityInstanceQuotaIsSet_;
    int32_t availabilityVcpusQuota_;
    bool availabilityVcpusQuotaIsSet_;
    int32_t availabilityRamQuota_;
    bool availabilityRamQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Quota_H_
