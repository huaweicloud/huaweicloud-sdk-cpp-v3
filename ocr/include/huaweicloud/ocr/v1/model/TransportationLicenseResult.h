
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_TransportationLicenseResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_TransportationLicenseResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  TransportationLicenseResult
    : public ModelBase
{
public:
    TransportationLicenseResult();
    virtual ~TransportationLicenseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransportationLicenseResult members

    /// <summary>
    /// 业户名称。 
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 道路运输证号。 
    /// </summary>

    std::string getLicenseNumber() const;
    bool licenseNumberIsSet() const;
    void unsetlicenseNumber();
    void setLicenseNumber(const std::string& value);

    /// <summary>
    /// 车辆号牌。 
    /// </summary>

    std::string getVehicleNumber() const;
    bool vehicleNumberIsSet() const;
    void unsetvehicleNumber();
    void setVehicleNumber(const std::string& value);

    /// <summary>
    /// 车辆类型。 
    /// </summary>

    std::string getVehicleType() const;
    bool vehicleTypeIsSet() const;
    void unsetvehicleType();
    void setVehicleType(const std::string& value);

    /// <summary>
    /// 吨(座)位。 
    /// </summary>

    std::string getMaximumCapacity() const;
    bool maximumCapacityIsSet() const;
    void unsetmaximumCapacity();
    void setMaximumCapacity(const std::string& value);

    /// <summary>
    /// 车辆尺寸。 
    /// </summary>

    std::string getVehicleSize() const;
    bool vehicleSizeIsSet() const;
    void unsetvehicleSize();
    void setVehicleSize(const std::string& value);

    /// <summary>
    /// 核发机关。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 发证日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 业户地址。 
    /// </summary>

    std::string getOwnerAddress() const;
    bool ownerAddressIsSet() const;
    void unsetownerAddress();
    void setOwnerAddress(const std::string& value);

    /// <summary>
    /// 经济类型。 
    /// </summary>

    std::string getEconomicType() const;
    bool economicTypeIsSet() const;
    void unseteconomicType();
    void setEconomicType(const std::string& value);

    /// <summary>
    /// 经营许可证号。 
    /// </summary>

    std::string getBusinessCertificate() const;
    bool businessCertificateIsSet() const;
    void unsetbusinessCertificate();
    void setBusinessCertificate(const std::string& value);

    /// <summary>
    /// 经营范围。 
    /// </summary>

    std::string getBusinessScope() const;
    bool businessScopeIsSet() const;
    void unsetbusinessScope();
    void setBusinessScope(const std::string& value);

    /// <summary>
    /// 有效期。 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 审验有效期。 
    /// </summary>

    std::string getReviewExpiryDate() const;
    bool reviewExpiryDateIsSet() const;
    void unsetreviewExpiryDate();
    void setReviewExpiryDate(const std::string& value);

    /// <summary>
    /// 技术等级评定。 
    /// </summary>

    std::string getAssessedTechnicalLevel() const;
    bool assessedTechnicalLevelIsSet() const;
    void unsetassessedTechnicalLevel();
    void setAssessedTechnicalLevel(const std::string& value);

    /// <summary>
    /// 道路运输证在原图中的坐标位置，输出左上、右上、右下、左下四个点坐标。仅在return_image_location设置为true时返回该字段。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getImageLocation();
    bool imageLocationIsSet() const;
    void unsetimageLocation();
    void setImageLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 道路运输证图片的base64编码结果。仅在return_adjusted_image设置为true时返回该字段。 
    /// </summary>

    std::string getAdjustedImage() const;
    bool adjustedImageIsSet() const;
    void unsetadjustedImage();
    void setAdjustedImage(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string ownerName_;
    bool ownerNameIsSet_;
    std::string licenseNumber_;
    bool licenseNumberIsSet_;
    std::string vehicleNumber_;
    bool vehicleNumberIsSet_;
    std::string vehicleType_;
    bool vehicleTypeIsSet_;
    std::string maximumCapacity_;
    bool maximumCapacityIsSet_;
    std::string vehicleSize_;
    bool vehicleSizeIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string ownerAddress_;
    bool ownerAddressIsSet_;
    std::string economicType_;
    bool economicTypeIsSet_;
    std::string businessCertificate_;
    bool businessCertificateIsSet_;
    std::string businessScope_;
    bool businessScopeIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string reviewExpiryDate_;
    bool reviewExpiryDateIsSet_;
    std::string assessedTechnicalLevel_;
    bool assessedTechnicalLevelIsSet_;
    std::vector<std::vector<int32_t>> imageLocation_;
    bool imageLocationIsSet_;
    std::string adjustedImage_;
    bool adjustedImageIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_TransportationLicenseResult_H_
