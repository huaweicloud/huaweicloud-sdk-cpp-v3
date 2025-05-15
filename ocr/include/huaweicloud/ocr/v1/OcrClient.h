#ifndef HUAWEICLOUD_SDK_OCR_V1_OcrClient_H_
#define HUAWEICLOUD_SDK_OCR_V1_OcrClient_H_

#include <huaweicloud/ocr/v1/OcrExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ocr/v1/model/AcceptanceBillRequestBody.h>
#include <huaweicloud/ocr/v1/model/AutoClassificationRequestBody.h>
#include <huaweicloud/ocr/v1/model/AutoIdDocClassificationRequestBody.h>
#include <huaweicloud/ocr/v1/model/BankReceiptRequestBody.h>
#include <huaweicloud/ocr/v1/model/BankcardRequestBody.h>
#include <huaweicloud/ocr/v1/model/BusinessCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/BusinessLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/CambodianIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/ChileIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/ColombiaIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/DriverLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/ExitEntryPermitRequestBody.h>
#include <huaweicloud/ocr/v1/model/FinancialStatementRequestBody.h>
#include <huaweicloud/ocr/v1/model/FlightItineraryRequestBody.h>
#include <huaweicloud/ocr/v1/model/GeneralTableRequestBody.h>
#include <huaweicloud/ocr/v1/model/GeneralTextRequestBody.h>
#include <huaweicloud/ocr/v1/model/HandwritingRequestBody.h>
#include <huaweicloud/ocr/v1/model/HealthCodeRequestBody.h>
#include <huaweicloud/ocr/v1/model/HkIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/HouseholdRegisterRequestBody.h>
#include <huaweicloud/ocr/v1/model/IdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/IdDocumentRequestBody.h>
#include <huaweicloud/ocr/v1/model/InsurancePolicyRequestBody.h>
#include <huaweicloud/ocr/v1/model/InvoiceVerificationRequestBody.h>
#include <huaweicloud/ocr/v1/model/LicensePlateRequestBody.h>
#include <huaweicloud/ocr/v1/model/MacaoIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/MainlandTravelPermitRequestBody.h>
#include <huaweicloud/ocr/v1/model/MvsInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/MyanmarDriverLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/MyanmarIdcardRequestBody.h>
#include <huaweicloud/ocr/v1/model/PassportRequestBody.h>
#include <huaweicloud/ocr/v1/model/PcrTestRecordRequestBody.h>
#include <huaweicloud/ocr/v1/model/PeruIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/QualificationCertificateRequestBody.h>
#include <huaweicloud/ocr/v1/model/QuotaInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/RealEstateCertificateRequestBody.h>
#include <huaweicloud/ocr/v1/model/RecognizeAcceptanceBillRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeAcceptanceBillResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeAutoClassificationRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeAutoClassificationResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeAutoIdDocClassificationRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeAutoIdDocClassificationResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeBankReceiptRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeBankReceiptResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeBankcardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeBankcardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeCambodianIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeCambodianIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeChileIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeChileIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeColombiaIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeColombiaIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeDriverLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeDriverLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeExitEntryPermitRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeExitEntryPermitResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeFinancialStatementRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeFinancialStatementResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeFlightItineraryRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeFlightItineraryResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeGeneralTableRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeGeneralTableResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeGeneralTextRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeGeneralTextResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeHandwritingRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeHandwritingResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeHealthCodeRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeHealthCodeResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeHkIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeHkIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeHouseholdRegisterRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeHouseholdRegisterResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeIdDocumentRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeIdDocumentResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeInsurancePolicyRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeInsurancePolicyResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeInvoiceVerificationRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeInvoiceVerificationResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeLicensePlateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeLicensePlateResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMacaoIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMacaoIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMainlandTravelPermitRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMainlandTravelPermitResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMvsInvoiceRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMvsInvoiceResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarDriverLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarDriverLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarIdcardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarIdcardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizePassportRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizePassportResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizePcrTestRecordRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizePcrTestRecordResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizePeruIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizePeruIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeQualificationCertificateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeQualificationCertificateResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeQuotaInvoiceRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeQuotaInvoiceResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeRealEstateCertificateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeRealEstateCertificateResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeSealRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeSealResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeSmartDocumentRecognizerRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeSmartDocumentRecognizerResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeTaxiInvoiceRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeTaxiInvoiceResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeThailandIdcardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeThailandIdcardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeThailandLicensePlateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeThailandLicensePlateResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeTollInvoiceRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeTollInvoiceResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeTrainTicketRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeTrainTicketResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeTransportationLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeTransportationLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeVatInvoiceRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeVatInvoiceResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeVehicleCertificateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeVehicleCertificateResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeVehicleLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeVehicleLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeVietnamIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeVietnamIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeWaybillElectronicRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeWaybillElectronicResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeWebImageRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeWebImageResponse.h>
#include <huaweicloud/ocr/v1/model/SealRequestBody.h>
#include <huaweicloud/ocr/v1/model/SmartDocumentRecognizerRequestBody.h>
#include <huaweicloud/ocr/v1/model/TaxiInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/ThailandIdcardRequestBody.h>
#include <huaweicloud/ocr/v1/model/ThailandLicensePlateRequestBody.h>
#include <huaweicloud/ocr/v1/model/TollInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/TrainTicketRequestBody.h>
#include <huaweicloud/ocr/v1/model/TransportationLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/VatInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/VehicleCertificateRequestBody.h>
#include <huaweicloud/ocr/v1/model/VehicleLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/VietnamIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/WaybillElectronicRequestBody.h>
#include <huaweicloud/ocr/v1/model/WebImageRequestBody.h>
#include <string>

#include <huaweicloud/ocr/v1/model/CustomTemplateRequestBody.h>
#include <huaweicloud/ocr/v1/model/RecognizeCustomTemplateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeCustomTemplateResponse.h>
#include <string>

#include <huaweicloud/ocr/v1/model/RecognizeVinRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeVinResponse.h>
#include <huaweicloud/ocr/v1/model/VinRequestBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ocr::V1::Model;

class HUAWEICLOUD_OCR_V1_EXPORT  OcrClient : public Client
{
public:

    OcrClient();

    virtual ~OcrClient();

    static ClientBuilder<OcrClient> newBuilder();

    // 承兑汇票识别
    //
    // 识别承兑汇票中的关键信息, 并以json格式返回结构化结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeAcceptanceBillResponse> recognizeAcceptanceBill(
        RecognizeAcceptanceBillRequest &request
    );
    // 智能分类识别
    //
    // 检测定位图片上指定要识别的票证（票据、证件或其他文字载体），并对其进行结构化识别。接口以列表形式返回图片上要识别票证的位置坐标、结构化识别的内容以及对应的类别。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section3)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 计费次数说明：
    // 只对识别成功的票证进行计费，识别失败的票证不计费。例如图片中包含三张票证，有两张识别成功，一张识别失败，此时接口计费两次。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeAutoClassificationResponse> recognizeAutoClassification(
        RecognizeAutoClassificationRequest &request
    );
    // 智能证件分类
    //
    // 支持9类证件的分类和告警检测，以JSON格式返回结果。支持的证件类型有秘鲁身份证、柬文身份证、香港身份证、澳门身份证、缅文身份证、缅文驾驶证、泰文身份证、护照和中华人民共和国居民身份证。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeAutoIdDocClassificationResponse> recognizeAutoIdDocClassification(
        RecognizeAutoIdDocClassificationRequest &request
    );
    // 银行回单识别
    //
    // 支持对银行回单版式进行文字识别及键值对提取，实现高效的自动化结构化返回。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeBankReceiptResponse> recognizeBankReceipt(
        RecognizeBankReceiptRequest &request
    );
    // 银行卡识别
    //
    // 识别银行卡上的关键文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section9)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeBankcardResponse> recognizeBankcard(
        RecognizeBankcardRequest &request
    );
    // 名片识别
    //
    // 识别名片图片上的文字信息，并返回识别的结构化结果。支持对多种不同版式名片进行结构化信息提取。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section13)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeBusinessCardResponse> recognizeBusinessCard(
        RecognizeBusinessCardRequest &request
    );
    // 营业执照识别
    //
    // 识别营业执照首页图片中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section10)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // 说明： 
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeBusinessLicenseResponse> recognizeBusinessLicense(
        RecognizeBusinessLicenseRequest &request
    );
    // 柬文身份证识别
    //
    // 识别柬文身份证图片中的文字内容，并将识别的结构化结果返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeCambodianIdCardResponse> recognizeCambodianIdCard(
        RecognizeCambodianIdCardRequest &request
    );
    // 智利身份证识别
    //
    // 识别智利身份证图片中的文字内容，并返回识别的结构化结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeChileIdCardResponse> recognizeChileIdCard(
        RecognizeChileIdCardRequest &request
    );
    // 哥伦比亚身份证识别
    //
    // 识别哥伦比亚身份证中的文字信息，并将识别的结构化结果返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeColombiaIdCardResponse> recognizeColombiaIdCard(
        RecognizeColombiaIdCardRequest &request
    );
    // 驾驶证识别
    //
    // 识别用户上传的驾驶证图片（或者用户提供的华为云上OBS的驾驶证图片文件的URL）中主页与副页的文字内容，并将识别的结果返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section6)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // 说明： 
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeDriverLicenseResponse> recognizeDriverLicense(
        RecognizeDriverLicenseRequest &request
    );
    // 往来港澳台通行证识别
    //
    // 识别往来港澳台证件图片中的文字内容，并将识别的结构化结果返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeExitEntryPermitResponse> recognizeExitEntryPermit(
        RecognizeExitEntryPermitRequest &request
    );
    // 财务报表识别
    //
    // 识别用户上传的表格图片中的文字内容，并将识别的结果返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section24)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeFinancialStatementResponse> recognizeFinancialStatement(
        RecognizeFinancialStatementRequest &request
    );
    // 飞机行程单识别
    //
    // 识别飞机行程单中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section20)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeFlightItineraryResponse> recognizeFlightItinerary(
        RecognizeFlightItineraryRequest &request
    );
    // 通用表格识别
    //
    // 用于识别用户上传的通用表格图片（或者用户提供的华为云上OBS的通用表格图片文件的URL）中的文字内容，并将识别的结果返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section0)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeGeneralTableResponse> recognizeGeneralTable(
        RecognizeGeneralTableRequest &request
    );
    // 通用文字识别
    //
    // 识别图片上的文字信息，返回识别的文字和坐标。支持扫描文件、电子文档、书籍、票据和表单等多种场景的文字识别。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section1)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeGeneralTextResponse> recognizeGeneralText(
        RecognizeGeneralTextRequest &request
    );
    // 手写文字识别
    //
    // 识别文档中的手写文字信息，并将识别的结构化结果返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section4)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeHandwritingResponse> recognizeHandwriting(
        RecognizeHandwritingRequest &request
    );
    // 防疫健康码识别
    //
    // 支持对全国各地区不同版式的防疫健康码、核酸检测记录、行程卡中的14个关键字段进行结构化识别；支持识别4种健康码颜色，包括绿码、黄码、红码、灰码；支持返回各个关键字段的置信度，以便提高人工校验效率。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section26)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeHealthCodeResponse> recognizeHealthCode(
        RecognizeHealthCodeRequest &request
    );
    // 香港身份证识别
    //
    // 识别香港身份证中的文字内容，并将识别的结果返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeHkIdCardResponse> recognizeHkIdCard(
        RecognizeHkIdCardRequest &request
    );
    // 户口本识别
    //
    // 识别户口本中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section11)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeHouseholdRegisterResponse> recognizeHouseholdRegister(
        RecognizeHouseholdRegisterRequest &request
    );
    // 身份证识别
    //
    // 识别身份证图片中的文字内容，并将识别的结果返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section5)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // 说明： 
    // 
    // 身份证识别支持中华人民共和国居民身份证识别。
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeIdCardResponse> recognizeIdCard(
        RecognizeIdCardRequest &request
    );
    // 通用证件识别
    //
    // 识别身份证件图像，并将识别的结构化结果返回给用户。支持多个国家/地区的身份证、驾驶证和护照，具体国家/地区和证件列表详见表1国家/地区和证件列表。
    // 
    // **表1国家/地区和证件列表**
    // 
    // | 国家/地区  | 英文名称    | 国家/地区代码 country_region | 支持证件类型 id_type      |
    // | ---------- | ----------- | ---------------------------- | ------------------------- |
    // | 越南       | Vietnam     | VNM                          | PP、DL、ID                |
    // | 印度       | India       | IND                          | PP                        |
    // | 菲律宾     | Philippines | PHL                          | PP、DL、ID（仅支持UUMID） |
    // | 阿尔巴尼亚 | Albania     | ALB                          | PP、DL、ID                |
    // | 巴西       | BRAZIL      | BRA                          | PP                        |
    // | 印度尼西亚 | INDONESIA   | IDN                          | PP                        |
    // | 马来西亚   | MALAYSIA    | MYS                          | PP                        |
    // | 尼日利亚   | NIGERIA     | NGA                          | PP                        |
    // | 巴基斯坦   | PAKISTAN    | PAK                          | PP                        |
    // | 俄罗斯     | RUSSIA      | RUS                          | PP（仅支持国际标准版本）  |
    // | 中国台湾   | TAIWAN      | TWN                          | PP                        |
    // | 乌克兰     | UKRAINE     | UKR                          | PP                        |
    // | 泰国       | THAILAND    | THA                          | ID、PP                    |
    // | 智利       | CHILE       | CHL                          | ID、PP                    |
    // | 中国香港   | HONGKONG    | HKG                          | ID                        |
    // 
    // - PP: passport,国际护照
    // - DL: driving license,驾驶证
    // - ID: identification card,各国颁发的身份证类型证件，比如身份证、选民证、社保卡等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeIdDocumentResponse> recognizeIdDocument(
        RecognizeIdDocumentRequest &request
    );
    // 保险单识别
    //
    // 识别保险单图片上的文字信息，并将识别的结构化结果返回给用户。支持对多种版式保险单的扫描图片及手机照片进行结构化信息提取。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section23)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeInsurancePolicyResponse> recognizeInsurancePolicy(
        RecognizeInsurancePolicyRequest &request
    );
    // 发票验真
    //
    // 发票验真服务支持10种增值税发票的信息核验，包括增值税专用发票、增值税普通发票、增值税普通发票（卷式）、增值税电子专用发票、增值税电子普通发票、增值税电子普通发票（通行费）、二手车销售统一发票、机动车销售统一发票、区块链电子发票、全电发票，支持返回票面的全部信息。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section16)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeInvoiceVerificationResponse> recognizeInvoiceVerification(
        RecognizeInvoiceVerificationRequest &request
    );
    // 车牌识别
    //
    // 识别输入图片中的车牌信息，并返回其坐标和内容。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section12)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeLicensePlateResponse> recognizeLicensePlate(
        RecognizeLicensePlateRequest &request
    );
    // 澳门身份证识别
    //
    // 识别澳门身份证图片中的文字内容，并将识别的结果返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeMacaoIdCardResponse> recognizeMacaoIdCard(
        RecognizeMacaoIdCardRequest &request
    );
    // 港澳台居民来往内地通行证识别
    //
    // 识别港澳居民来往内地通行证上的文字内容，并将识别的结构化结果返回给用户。支持港澳居民来往内地通行证和台湾居民来往内地通行证两种卡证。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeMainlandTravelPermitResponse> recognizeMainlandTravelPermit(
        RecognizeMainlandTravelPermitRequest &request
    );
    // 机动车销售发票识别
    //
    // 识别机动车销售发票、二手车销售发票图片（服务能自动分辨两种类型，返回对应的字段）中的文字内容，并将识别的结果以JSON格式返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section17)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 该增值税发票仅限于中华人民共和国境内使用的增值税发票。
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeMvsInvoiceResponse> recognizeMvsInvoice(
        RecognizeMvsInvoiceRequest &request
    );
    // 缅文驾驶证识别
    //
    // 识别缅甸驾驶证中的文字信息，并返回识别的结构化结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeMyanmarDriverLicenseResponse> recognizeMyanmarDriverLicense(
        RecognizeMyanmarDriverLicenseRequest &request
    );
    // 缅文身份证识别
    //
    // 识别缅文身份证中的文字信息，并返回识别的结构化结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeMyanmarIdcardResponse> recognizeMyanmarIdcard(
        RecognizeMyanmarIdcardRequest &request
    );
    // 护照识别
    //
    // 识别用户上传的护照首页图片中的文字信息，并返回识别的结构化结果。当前版本支持中国护照的全字段识别。外国护照支持护照下方两行国际标准化的机读码识别，并可从中提取6-7个关键字段信息。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section8)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizePassportResponse> recognizePassport(
        RecognizePassportRequest &request
    );
    // 核酸检测记录识别
    //
    // 识别核酸检测记录中的文字信息，并将识别的结构化结果返回给用户。PCR，全称Polymerase chain reaction,即聚合酶链式反应。PCR-test也为大众所认知为新型冠状病毒核酸检测测试。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizePcrTestRecordResponse> recognizePcrTestRecord(
        RecognizePcrTestRecordRequest &request
    );
    // 秘鲁身份证识别
    //
    // 识别秘鲁身份证图片中的文字内容，并将识别的结构化结果返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizePeruIdCardResponse> recognizePeruIdCard(
        RecognizePeruIdCardRequest &request
    );
    // 道路运输从业资格证识别
    //
    // 识别道路运输从业资格证上的关键文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section25)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeQualificationCertificateResponse> recognizeQualificationCertificate(
        RecognizeQualificationCertificateRequest &request
    );
    // 定额发票识别
    //
    // 识别定额发票中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section21)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // 说明： 
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeQuotaInvoiceResponse> recognizeQuotaInvoice(
        RecognizeQuotaInvoiceRequest &request
    );
    // 不动产证识别
    //
    // 识别不动产证中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section11)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明： 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeRealEstateCertificateResponse> recognizeRealEstateCertificate(
        RecognizeRealEstateCertificateRequest &request
    );
    // 印章识别
    //
    // 检测和识别合同文件或常用票据中的印章，并可擦除和提取图片中的印章，通过JSON格式返回印章检测、识别、擦除和提取的结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeSealResponse> recognizeSeal(
        RecognizeSealRequest &request
    );
    // 智能文档解析
    //
    // 对证件、票据、表单等任意版式文档进行键值对提取、文字识别、以及表格识别等任务，实现进阶高效的自动化结构化返回。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section11)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeSmartDocumentRecognizerResponse> recognizeSmartDocumentRecognizer(
        RecognizeSmartDocumentRecognizerRequest &request
    );
    // 出租车发票识别
    //
    // 识别出租车发票中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section18)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // 说明：
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeTaxiInvoiceResponse> recognizeTaxiInvoice(
        RecognizeTaxiInvoiceRequest &request
    );
    // 泰文身份证识别
    //
    // 识别泰国身份证中的文字信息，并返回识别的结构化结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeThailandIdcardResponse> recognizeThailandIdcard(
        RecognizeThailandIdcardRequest &request
    );
    // 泰国车牌识别
    //
    // 识别泰国车牌图片中的车牌信息，并返回识别的结构化结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeThailandLicensePlateResponse> recognizeThailandLicensePlate(
        RecognizeThailandLicensePlateRequest &request
    );
    // 车辆通行费发票识别
    //
    // 识别车辆通行费发票中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section19)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeTollInvoiceResponse> recognizeTollInvoice(
        RecognizeTollInvoiceRequest &request
    );
    // 火车票识别
    //
    // 识别火车票中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section22)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeTrainTicketResponse> recognizeTrainTicket(
        RecognizeTrainTicketRequest &request
    );
    // 道路运输证识别
    //
    // 识别道路运输证首页中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section11)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明： 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeTransportationLicenseResponse> recognizeTransportationLicense(
        RecognizeTransportationLicenseRequest &request
    );
    // 增值税发票识别
    //
    // 识别增值税发票的类别，以及图片中的文字内容，并以json格式返回识别的结构化结果，不支持真伪验证。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section15)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 该增值税发票仅限于中华人民共和国境内使用的增值税发票。
    // 支持的增值税发票包括：增值税专用发票、增值税普通发票、增值税电子普通发票、增值税电子专用发票、增值税电子普通发票（通行费）、增值税普通发票（卷票）。
    // 如果图片中包含多张卡证票据，请调用智能分类识别服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeVatInvoiceResponse> recognizeVatInvoice(
        RecognizeVatInvoiceRequest &request
    );
    // 车辆合格证识别
    //
    // 识别车辆合格证中的文字信息，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section11)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeVehicleCertificateResponse> recognizeVehicleCertificate(
        RecognizeVehicleCertificateRequest &request
    );
    // 行驶证识别
    //
    // 识别用户上传的行驶证图片（或者用户提供的华为云上OBS的行驶证图片文件的URL）中主页和副页的文字内容，并将识别的结果返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section7)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 说明：
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeVehicleLicenseResponse> recognizeVehicleLicense(
        RecognizeVehicleLicenseRequest &request
    );
    // 越南身份证识别
    //
    // 识别越南身份证中的文字信息，并将识别的结构化结果返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeVietnamIdCardResponse> recognizeVietnamIdCard(
        RecognizeVietnamIdCardRequest &request
    );
    // 电子面单识别
    //
    // 识别用户上传的电子面单图片中的文字内容，并将识别的结果以json格式返回给用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeWaybillElectronicResponse> recognizeWaybillElectronic(
        RecognizeWaybillElectronicRequest &request
    );
    // 网络图片识别
    //
    // 识别网络图片中的文字内容，并返回识别的结构化结果。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section2)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeWebImageResponse> recognizeWebImage(
        RecognizeWebImageRequest &request
    );

    // 自定义模板OCR
    //
    // 自定义模板OCR，支持用户自定义模板，对于版式固定的各种票据和卡证，通过可视化界面操作，指定需要识别的关键字段，实现用户特定格式图片的自动识别和结构化提取。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeCustomTemplateResponse> recognizeCustomTemplate(
        RecognizeCustomTemplateRequest &request
    );

    // VIN码识别
    //
    // 识别图片中的车架号信息，并将识别结果返回给用户。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html#section14)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeVinResponse> recognizeVin(
        RecognizeVinRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_OCR_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ocr::V1::OcrClient>;

#endif // HUAWEICLOUD_SDK_OCR_V1_OcrClient_H_

