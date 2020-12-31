
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesRequest_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  ListImagesRequest
    : public ModelBase
{
public:
    ListImagesRequest();
    virtual ~ListImagesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImagesRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getImagetype() const;
    bool imagetypeIsSet() const;
    void unsetimagetype();
    void setImagetype(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIsregistered() const;
    bool isregisteredIsSet() const;
    void unsetisregistered();
    void setIsregistered(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportDiskintensive() const;
    bool supportDiskintensiveIsSet() const;
    void unsetsupportDiskintensive();
    void setSupportDiskintensive(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportHighperformance() const;
    bool supportHighperformanceIsSet() const;
    void unsetsupportHighperformance();
    void setSupportHighperformance(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportKvm() const;
    bool supportKvmIsSet() const;
    void unsetsupportKvm();
    void setSupportKvm(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportKvmGpuType() const;
    bool supportKvmGpuTypeIsSet() const;
    void unsetsupportKvmGpuType();
    void setSupportKvmGpuType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportKvmInfiniband() const;
    bool supportKvmInfinibandIsSet() const;
    void unsetsupportKvmInfiniband();
    void setSupportKvmInfiniband(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportLargememory() const;
    bool supportLargememoryIsSet() const;
    void unsetsupportLargememory();
    void setSupportLargememory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportXen() const;
    bool supportXenIsSet() const;
    void unsetsupportXen();
    void setSupportXen(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportXenGpuType() const;
    bool supportXenGpuTypeIsSet() const;
    void unsetsupportXenGpuType();
    void setSupportXenGpuType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSupportXenHana() const;
    bool supportXenHanaIsSet() const;
    void unsetsupportXenHana();
    void setSupportXenHana(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMemberStatus() const;
    bool memberStatusIsSet() const;
    void unsetmemberStatus();
    void setMemberStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getVirtualEnvType() const;
    bool virtualEnvTypeIsSet() const;
    void unsetvirtualEnvType();
    void setVirtualEnvType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getArchitecture() const;
    bool architectureIsSet() const;
    void unsetarchitecture();
    void setArchitecture(const std::string& value);


protected:
    std::string imagetype_;
    bool imagetypeIsSet_;
    std::string isregistered_;
    bool isregisteredIsSet_;
    std::string osBit_;
    bool osBitIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string supportDiskintensive_;
    bool supportDiskintensiveIsSet_;
    std::string supportHighperformance_;
    bool supportHighperformanceIsSet_;
    std::string supportKvm_;
    bool supportKvmIsSet_;
    std::string supportKvmGpuType_;
    bool supportKvmGpuTypeIsSet_;
    std::string supportKvmInfiniband_;
    bool supportKvmInfinibandIsSet_;
    std::string supportLargememory_;
    bool supportLargememoryIsSet_;
    std::string supportXen_;
    bool supportXenIsSet_;
    std::string supportXenGpuType_;
    bool supportXenGpuTypeIsSet_;
    std::string supportXenHana_;
    bool supportXenHanaIsSet_;
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string memberStatus_;
    bool memberStatusIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    bool protected_;
    bool protectedIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string virtualEnvType_;
    bool virtualEnvTypeIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string architecture_;
    bool architectureIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListImagesRequest& dereference_from_shared_ptr(std::shared_ptr<ListImagesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImagesRequest_H_
