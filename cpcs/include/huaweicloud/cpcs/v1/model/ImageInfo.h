
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ImageInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ImageInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ImageInfo
    : public ModelBase
{
public:
    ImageInfo();
    virtual ~ImageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageInfo members

    /// <summary>
    /// 镜像ID
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 镜像名称
    /// </summary>

    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);

    /// <summary>
    /// 镜像所属的服务
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 镜像的系统架构： - **X86_64** : X86 - **ARRCH** : ARM
    /// </summary>

    std::string getArchType() const;
    bool archTypeIsSet() const;
    void unsetarchType();
    void setArchType(const std::string& value);

    /// <summary>
    /// 规格ID
    /// </summary>

    std::string getSpecificationId() const;
    bool specificationIdIsSet() const;
    void unsetspecificationId();
    void setSpecificationId(const std::string& value);

    /// <summary>
    /// 镜像的录入时间，UNIX时间戳，单位毫秒
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 版本类型
    /// </summary>

    std::string getVersionType() const;
    bool versionTypeIsSet() const;
    void unsetversionType();
    void setVersionType(const std::string& value);

    /// <summary>
    /// domain白名单列表，多个之间用逗号分隔
    /// </summary>

    std::string getTrustDomain() const;
    bool trustDomainIsSet() const;
    void unsettrustDomain();
    void setTrustDomain(const std::string& value);

    /// <summary>
    /// 厂商名称
    /// </summary>

    std::string getVendorName() const;
    bool vendorNameIsSet() const;
    void unsetvendorName();
    void setVendorName(const std::string& value);

    /// <summary>
    /// 厂商版本号
    /// </summary>

    std::string getVendorImageVersion() const;
    bool vendorImageVersionIsSet() const;
    void unsetvendorImageVersion();
    void setVendorImageVersion(const std::string& value);

    /// <summary>
    /// 密码服务依赖的(厂商)平台版本号
    /// </summary>

    std::string getCcspVersionNeed() const;
    bool ccspVersionNeedIsSet() const;
    void unsetccspVersionNeed();
    void setCcspVersionNeed(const std::string& value);

    /// <summary>
    /// 华为版本号
    /// </summary>

    std::string getHwImageVersion() const;
    bool hwImageVersionIsSet() const;
    void unsethwImageVersion();
    void setHwImageVersion(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string archType_;
    bool archTypeIsSet_;
    std::string specificationId_;
    bool specificationIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string versionType_;
    bool versionTypeIsSet_;
    std::string trustDomain_;
    bool trustDomainIsSet_;
    std::string vendorName_;
    bool vendorNameIsSet_;
    std::string vendorImageVersion_;
    bool vendorImageVersionIsSet_;
    std::string ccspVersionNeed_;
    bool ccspVersionNeedIsSet_;
    std::string hwImageVersion_;
    bool hwImageVersionIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ImageInfo_H_
