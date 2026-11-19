
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_VolumeFlavorItemDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_VolumeFlavorItemDetail_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  VolumeFlavorItemDetail
    : public ModelBase
{
public:
    VolumeFlavorItemDetail();
    virtual ~VolumeFlavorItemDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeFlavorItemDetail members

    /// <summary>
    /// **参数解释**: IO类型。 **取值范围**: - ULTRAHIGH：超高IO。 - ESSD：极速型SSD。
    /// </summary>

    std::string getIoType() const;
    bool ioTypeIsSet() const;
    void unsetioType();
    void setIoType(const std::string& value);

    /// <summary>
    /// **参数解释**: 存储介质类型。 **取值范围**: - SAS：高IO云硬盘。 - SSD：超高IO云硬盘。 - ESSD：极速型SSD云硬盘。
    /// </summary>

    std::string getMediaType() const;
    bool mediaTypeIsSet() const;
    void unsetmediaType();
    void setMediaType(const std::string& value);

    /// <summary>
    /// **参数解释**: 存储规格在各个可用区的状态。 **取值范围**: - normal：正常。 - sellout：已售罄。 - unknown：状态未知。 - unsupported：不支持。 - abandon：已废弃。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**: 该存储规格支持的计算规格组类型列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<std::string>& getSupportComputeGroupType();
    bool supportComputeGroupTypeIsSet() const;
    void unsetsupportComputeGroupType();
    void setSupportComputeGroupType(const std::vector<std::string>& value);


protected:
    std::string ioType_;
    bool ioTypeIsSet_;
    std::string mediaType_;
    bool mediaTypeIsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;
    std::vector<std::string> supportComputeGroupType_;
    bool supportComputeGroupTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_VolumeFlavorItemDetail_H_
