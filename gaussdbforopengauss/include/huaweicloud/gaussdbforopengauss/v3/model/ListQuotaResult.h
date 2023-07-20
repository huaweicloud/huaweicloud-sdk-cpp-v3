
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListQuotaResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListQuotaResult_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListQuotaResult
    : public ModelBase
{
public:
    ListQuotaResult();
    virtual ~ListQuotaResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListQuotaResult members

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
    /// EPS实例资源配额数量，值为-1时表示配额无限制。
    /// </summary>

    int32_t getInstanceEpsQuota() const;
    bool instanceEpsQuotaIsSet() const;
    void unsetinstanceEpsQuota();
    void setInstanceEpsQuota(int32_t value);

    /// <summary>
    /// EPS计算资源配额数量，值为-1时表示配额无限制。
    /// </summary>

    int32_t getVcpusEpsQuota() const;
    bool vcpusEpsQuotaIsSet() const;
    void unsetvcpusEpsQuota();
    void setVcpusEpsQuota(int32_t value);

    /// <summary>
    /// EPS内存资源配额量，单位为GB，值为-1时表示配额无限制。
    /// </summary>

    int32_t getRamEpsQuota() const;
    bool ramEpsQuotaIsSet() const;
    void unsetramEpsQuota();
    void setRamEpsQuota(int32_t value);

    /// <summary>
    /// EPS磁盘资源配额量，单位为GB，值为-1时表示配额无限制。
    /// </summary>

    int32_t getVolumeEpsQuota() const;
    bool volumeEpsQuotaIsSet() const;
    void unsetvolumeEpsQuota();
    void setVolumeEpsQuota(int32_t value);

    /// <summary>
    /// EPS实例使用数量。
    /// </summary>

    int32_t getInstanceUsed() const;
    bool instanceUsedIsSet() const;
    void unsetinstanceUsed();
    void setInstanceUsed(int32_t value);

    /// <summary>
    /// EPS计算资源使用数量。
    /// </summary>

    int32_t getVcpusUsed() const;
    bool vcpusUsedIsSet() const;
    void unsetvcpusUsed();
    void setVcpusUsed(int32_t value);

    /// <summary>
    /// EPS内存使用配额量，单位为GB。
    /// </summary>

    int32_t getRamUsed() const;
    bool ramUsedIsSet() const;
    void unsetramUsed();
    void setRamUsed(int32_t value);

    /// <summary>
    /// EPS磁盘使用配额量，单位为GB。
    /// </summary>

    int32_t getVolumeUsed() const;
    bool volumeUsedIsSet() const;
    void unsetvolumeUsed();
    void setVolumeUsed(int32_t value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string enterpriseProjectName_;
    bool enterpriseProjectNameIsSet_;
    int32_t instanceEpsQuota_;
    bool instanceEpsQuotaIsSet_;
    int32_t vcpusEpsQuota_;
    bool vcpusEpsQuotaIsSet_;
    int32_t ramEpsQuota_;
    bool ramEpsQuotaIsSet_;
    int32_t volumeEpsQuota_;
    bool volumeEpsQuotaIsSet_;
    int32_t instanceUsed_;
    bool instanceUsedIsSet_;
    int32_t vcpusUsed_;
    bool vcpusUsedIsSet_;
    int32_t ramUsed_;
    bool ramUsedIsSet_;
    int32_t volumeUsed_;
    bool volumeUsedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListQuotaResult_H_
