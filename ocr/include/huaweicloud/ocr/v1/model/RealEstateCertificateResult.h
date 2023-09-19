
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_RealEstateCertificateResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_RealEstateCertificateResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

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
class HUAWEICLOUD_OCR_V1_EXPORT  RealEstateCertificateResult
    : public ModelBase
{
public:
    RealEstateCertificateResult();
    virtual ~RealEstateCertificateResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RealEstateCertificateResult members

    /// <summary>
    /// 填发单位。 
    /// </summary>

    std::string getIssuer() const;
    bool issuerIsSet() const;
    void unsetissuer();
    void setIssuer(const std::string& value);

    /// <summary>
    /// 填发日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 不动产证编号。 
    /// </summary>

    std::string getRealEstateCertificateNo() const;
    bool realEstateCertificateNoIsSet() const;
    void unsetrealEstateCertificateNo();
    void setRealEstateCertificateNo(const std::string& value);

    /// <summary>
    /// 抵押印章个数。 
    /// </summary>

    int32_t getMortgageSeals() const;
    bool mortgageSealsIsSet() const;
    void unsetmortgageSeals();
    void setMortgageSeals(int32_t value);

    /// <summary>
    /// 注销的抵押印章个数。 
    /// </summary>

    int32_t getCanceledMortgageSeals() const;
    bool canceledMortgageSealsIsSet() const;
    void unsetcanceledMortgageSeals();
    void setCanceledMortgageSeals(int32_t value);

    /// <summary>
    /// 房屋坐落。 
    /// </summary>

    std::string getEstateLocation() const;
    bool estateLocationIsSet() const;
    void unsetestateLocation();
    void setEstateLocation(const std::string& value);

    /// <summary>
    /// 总楼层数。 
    /// </summary>

    std::string getTotalFloors() const;
    bool totalFloorsIsSet() const;
    void unsettotalFloors();
    void setTotalFloors(const std::string& value);

    /// <summary>
    /// 所在层。 
    /// </summary>

    std::string getFloor() const;
    bool floorIsSet() const;
    void unsetfloor();
    void setFloor(const std::string& value);

    /// <summary>
    /// 建成年份。 
    /// </summary>

    std::string getYearBuilt() const;
    bool yearBuiltIsSet() const;
    void unsetyearBuilt();
    void setYearBuilt(const std::string& value);

    /// <summary>
    /// 结构。 
    /// </summary>

    std::string getStructure() const;
    bool structureIsSet() const;
    void unsetstructure();
    void setStructure(const std::string& value);

    /// <summary>
    /// 建筑面积。 
    /// </summary>

    std::string getArea() const;
    bool areaIsSet() const;
    void unsetarea();
    void setArea(const std::string& value);

    /// <summary>
    /// 印花税票个数。 
    /// </summary>

    int32_t getRevenueStamps() const;
    bool revenueStampsIsSet() const;
    void unsetrevenueStamps();
    void setRevenueStamps(int32_t value);

    /// <summary>
    /// 产权证号。 
    /// </summary>

    std::string getOwnershipCertificateNo() const;
    bool ownershipCertificateNoIsSet() const;
    void unsetownershipCertificateNo();
    void setOwnershipCertificateNo(const std::string& value);

    /// <summary>
    /// 房屋所有权人。 
    /// </summary>

    std::string getEstateHolder() const;
    bool estateHolderIsSet() const;
    void unsetestateHolder();
    void setEstateHolder(const std::string& value);

    /// <summary>
    /// 权利人。 
    /// </summary>

    std::string getObligee() const;
    bool obligeeIsSet() const;
    void unsetobligee();
    void setObligee(const std::string& value);

    /// <summary>
    /// 共有情况。 
    /// </summary>

    std::string getOwnership() const;
    bool ownershipIsSet() const;
    void unsetownership();
    void setOwnership(const std::string& value);

    /// <summary>
    /// 不动产单元号。 
    /// </summary>

    std::string getPropertyUnitNo() const;
    bool propertyUnitNoIsSet() const;
    void unsetpropertyUnitNo();
    void setPropertyUnitNo(const std::string& value);

    /// <summary>
    /// 权利类型。 
    /// </summary>

    std::string getRightType() const;
    bool rightTypeIsSet() const;
    void unsetrightType();
    void setRightType(const std::string& value);

    /// <summary>
    /// 权利性质。 
    /// </summary>

    std::string getRightNature() const;
    bool rightNatureIsSet() const;
    void unsetrightNature();
    void setRightNature(const std::string& value);

    /// <summary>
    /// 使用用途。 
    /// </summary>

    std::string getUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(const std::string& value);

    /// <summary>
    /// 设计、规划用途。 
    /// </summary>

    std::string getIntendedUsage() const;
    bool intendedUsageIsSet() const;
    void unsetintendedUsage();
    void setIntendedUsage(const std::string& value);

    /// <summary>
    /// 各个字段的置信度。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string issuer_;
    bool issuerIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string realEstateCertificateNo_;
    bool realEstateCertificateNoIsSet_;
    int32_t mortgageSeals_;
    bool mortgageSealsIsSet_;
    int32_t canceledMortgageSeals_;
    bool canceledMortgageSealsIsSet_;
    std::string estateLocation_;
    bool estateLocationIsSet_;
    std::string totalFloors_;
    bool totalFloorsIsSet_;
    std::string floor_;
    bool floorIsSet_;
    std::string yearBuilt_;
    bool yearBuiltIsSet_;
    std::string structure_;
    bool structureIsSet_;
    std::string area_;
    bool areaIsSet_;
    int32_t revenueStamps_;
    bool revenueStampsIsSet_;
    std::string ownershipCertificateNo_;
    bool ownershipCertificateNoIsSet_;
    std::string estateHolder_;
    bool estateHolderIsSet_;
    std::string obligee_;
    bool obligeeIsSet_;
    std::string ownership_;
    bool ownershipIsSet_;
    std::string propertyUnitNo_;
    bool propertyUnitNoIsSet_;
    std::string rightType_;
    bool rightTypeIsSet_;
    std::string rightNature_;
    bool rightNatureIsSet_;
    std::string usage_;
    bool usageIsSet_;
    std::string intendedUsage_;
    bool intendedUsageIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_RealEstateCertificateResult_H_
