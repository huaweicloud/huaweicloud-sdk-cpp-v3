
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitEndorsementInfo_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitEndorsementInfo_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  ExitEntryPermitEndorsementInfo
    : public ModelBase
{
public:
    ExitEntryPermitEndorsementInfo();
    virtual ~ExitEntryPermitEndorsementInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExitEntryPermitEndorsementInfo members

    /// <summary>
    /// 签注种类。 
    /// </summary>

    std::string getEndorsementType() const;
    bool endorsementTypeIsSet() const;
    void unsetendorsementType();
    void setEndorsementType(const std::string& value);

    /// <summary>
    /// 签注往返有效次数。 
    /// </summary>

    std::string getValidRoundTrips() const;
    bool validRoundTripsIsSet() const;
    void unsetvalidRoundTrips();
    void setValidRoundTrips(const std::string& value);

    /// <summary>
    /// 签注有效期。 
    /// </summary>

    std::string getEndorsementValidPeriod() const;
    bool endorsementValidPeriodIsSet() const;
    void unsetendorsementValidPeriod();
    void setEndorsementValidPeriod(const std::string& value);

    /// <summary>
    /// 签注备注。 
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 签注签发信息。 
    /// </summary>

    std::string getIssueInfo() const;
    bool issueInfoIsSet() const;
    void unsetissueInfo();
    void setIssueInfo(const std::string& value);


protected:
    std::string endorsementType_;
    bool endorsementTypeIsSet_;
    std::string validRoundTrips_;
    bool validRoundTripsIsSet_;
    std::string endorsementValidPeriod_;
    bool endorsementValidPeriodIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string issueInfo_;
    bool issueInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_ExitEntryPermitEndorsementInfo_H_
