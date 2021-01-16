
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeType_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeType_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/VolumeTypeExtraSpecs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  VolumeType
    : public ModelBase
{
public:
    VolumeType();
    virtual ~VolumeType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VolumeType members

    /// <summary>
    /// 云硬盘类型的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘类型名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeTypeExtraSpecs getExtraSpecs() const;
    bool extraSpecsIsSet() const;
    void unsetextraSpecs();
    void setExtraSpecs(const VolumeTypeExtraSpecs& value);

    /// <summary>
    /// 云硬盘类型的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getQosSpecsId() const;
    bool qosSpecsIdIsSet() const;
    void unsetqosSpecsId();
    void setQosSpecsId(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    bool isIsPublic() const;
    bool isPublicIsSet() const;
    void unsetisPublic();
    void setIsPublic(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    VolumeTypeExtraSpecs extraSpecs_;
    bool extraSpecsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string qosSpecsId_;
    bool qosSpecsIdIsSet_;
    bool isPublic_;
    bool isPublicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeType_H_
