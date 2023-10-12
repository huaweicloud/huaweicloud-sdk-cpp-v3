#ifndef HUAWEICLOUD_SDK_OCR_V1_OcrMeta_H_
#define HUAWEICLOUD_SDK_OCR_V1_OcrMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/ocr/v1/OcrExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_OCR_V1_EXPORT  OcrMeta {
public:
    static HttpRequestDef genRequestDefForRecognizeAcceptanceBill();
    static HttpRequestDef genRequestDefForRecognizeAutoClassification();
    static HttpRequestDef genRequestDefForRecognizeBankcard();
    static HttpRequestDef genRequestDefForRecognizeBusinessCard();
    static HttpRequestDef genRequestDefForRecognizeBusinessLicense();
    static HttpRequestDef genRequestDefForRecognizeCambodianIdCard();
    static HttpRequestDef genRequestDefForRecognizeChileIdCard();
    static HttpRequestDef genRequestDefForRecognizeColombiaIdCard();
    static HttpRequestDef genRequestDefForRecognizeDriverLicense();
    static HttpRequestDef genRequestDefForRecognizeExitEntryPermit();
    static HttpRequestDef genRequestDefForRecognizeFinancialStatement();
    static HttpRequestDef genRequestDefForRecognizeFlightItinerary();
    static HttpRequestDef genRequestDefForRecognizeGeneralTable();
    static HttpRequestDef genRequestDefForRecognizeGeneralText();
    static HttpRequestDef genRequestDefForRecognizeHandwriting();
    static HttpRequestDef genRequestDefForRecognizeHealthCode();
    static HttpRequestDef genRequestDefForRecognizeHkIdCard();
    static HttpRequestDef genRequestDefForRecognizeIdCard();
    static HttpRequestDef genRequestDefForRecognizeIdDocument();
    static HttpRequestDef genRequestDefForRecognizeInsurancePolicy();
    static HttpRequestDef genRequestDefForRecognizeInvoiceVerification();
    static HttpRequestDef genRequestDefForRecognizeLicensePlate();
    static HttpRequestDef genRequestDefForRecognizeMacaoIdCard();
    static HttpRequestDef genRequestDefForRecognizeMainlandTravelPermit();
    static HttpRequestDef genRequestDefForRecognizeMvsInvoice();
    static HttpRequestDef genRequestDefForRecognizeMyanmarDriverLicense();
    static HttpRequestDef genRequestDefForRecognizeMyanmarIdcard();
    static HttpRequestDef genRequestDefForRecognizePassport();
    static HttpRequestDef genRequestDefForRecognizePcrTestRecord();
    static HttpRequestDef genRequestDefForRecognizeQualificationCertificate();
    static HttpRequestDef genRequestDefForRecognizeQuotaInvoice();
    static HttpRequestDef genRequestDefForRecognizeRealEstateCertificate();
    static HttpRequestDef genRequestDefForRecognizeSmartDocumentRecognizer();
    static HttpRequestDef genRequestDefForRecognizeTaxiInvoice();
    static HttpRequestDef genRequestDefForRecognizeThailandIdcard();
    static HttpRequestDef genRequestDefForRecognizeThailandLicensePlate();
    static HttpRequestDef genRequestDefForRecognizeTollInvoice();
    static HttpRequestDef genRequestDefForRecognizeTrainTicket();
    static HttpRequestDef genRequestDefForRecognizeTransportationLicense();
    static HttpRequestDef genRequestDefForRecognizeVatInvoice();
    static HttpRequestDef genRequestDefForRecognizeVehicleCertificate();
    static HttpRequestDef genRequestDefForRecognizeVehicleLicense();
    static HttpRequestDef genRequestDefForRecognizeVietnamIdCard();
    static HttpRequestDef genRequestDefForRecognizeWaybillElectronic();
    static HttpRequestDef genRequestDefForRecognizeWebImage();
    static HttpRequestDef genRequestDefForRecognizeCustomTemplate();
    static HttpRequestDef genRequestDefForRecognizeVin();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_OcrMeta_H_
