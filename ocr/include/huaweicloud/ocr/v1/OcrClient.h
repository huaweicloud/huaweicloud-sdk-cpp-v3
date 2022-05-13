#ifndef HUAWEICLOUD_SDK_OCR_V1_OcrClient_H_
#define HUAWEICLOUD_SDK_OCR_V1_OcrClient_H_

#include <huaweicloud/ocr/v1/OcrExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ocr/v1/model/AutoClassificationRequestBody.h>
#include <huaweicloud/ocr/v1/model/BankcardRequestBody.h>
#include <huaweicloud/ocr/v1/model/BusinessCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/BusinessLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/ChileIdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/DriverLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/FinancialStatementRequestBody.h>
#include <huaweicloud/ocr/v1/model/FlightItineraryRequestBody.h>
#include <huaweicloud/ocr/v1/model/GeneralTableRequestBody.h>
#include <huaweicloud/ocr/v1/model/GeneralTextRequestBody.h>
#include <huaweicloud/ocr/v1/model/HandwritingRequestBody.h>
#include <huaweicloud/ocr/v1/model/HealthCodeRequestBody.h>
#include <huaweicloud/ocr/v1/model/IdCardRequestBody.h>
#include <huaweicloud/ocr/v1/model/InsurancePolicyRequestBody.h>
#include <huaweicloud/ocr/v1/model/InvoiceVerificationRequestBody.h>
#include <huaweicloud/ocr/v1/model/LicensePlateRequestBody.h>
#include <huaweicloud/ocr/v1/model/MvsInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/MyanmarDriverLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/MyanmarIdcardRequestBody.h>
#include <huaweicloud/ocr/v1/model/PassportRequestBody.h>
#include <huaweicloud/ocr/v1/model/QualificationCertificateRequestBody.h>
#include <huaweicloud/ocr/v1/model/QuotaInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/RecognizeAutoClassificationRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeAutoClassificationResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeBankcardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeBankcardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeBusinessLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeChileIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeChileIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeDriverLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeDriverLicenseResponse.h>
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
#include <huaweicloud/ocr/v1/model/RecognizeIdCardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeIdCardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeInsurancePolicyRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeInsurancePolicyResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeInvoiceVerificationRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeInvoiceVerificationResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeLicensePlateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeLicensePlateResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMvsInvoiceRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMvsInvoiceResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarDriverLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarDriverLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarIdcardRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeMyanmarIdcardResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizePassportRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizePassportResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeQualificationCertificateRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeQualificationCertificateResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeQuotaInvoiceRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeQuotaInvoiceResponse.h>
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
#include <huaweicloud/ocr/v1/model/RecognizeVehicleLicenseRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeVehicleLicenseResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeWaybillElectronicRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeWaybillElectronicResponse.h>
#include <huaweicloud/ocr/v1/model/RecognizeWebImageRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeWebImageResponse.h>
#include <huaweicloud/ocr/v1/model/TaxiInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/ThailandIdcardRequestBody.h>
#include <huaweicloud/ocr/v1/model/ThailandLicensePlateRequestBody.h>
#include <huaweicloud/ocr/v1/model/TollInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/TrainTicketRequestBody.h>
#include <huaweicloud/ocr/v1/model/TransportationLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/VatInvoiceRequestBody.h>
#include <huaweicloud/ocr/v1/model/VehicleLicenseRequestBody.h>
#include <huaweicloud/ocr/v1/model/WaybillElectronicRequestBody.h>
#include <huaweicloud/ocr/v1/model/WebImageRequestBody.h>

#include <huaweicloud/ocr/v1/model/RecognizeVinRequest.h>
#include <huaweicloud/ocr/v1/model/RecognizeVinResponse.h>
#include <huaweicloud/ocr/v1/model/VinRequestBody.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
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

    // 智能分类识别
    //
    // 检测定位图片上指定要识别的票证（票据、证件或其他文字载体），并对其进行结构化识别。接口以列表形式返回图片上要识别票证的位置坐标、结构化识别的内容以及对应的类别。
    // 
    // 计费次数说明：
    // 
    // 只对识别成功的票证进行计费，识别失败的票证不计费。例如图片中包含三张票证，有两张识别成功，一张识别失败，此时接口计费两次。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeAutoClassificationResponse> recognizeAutoClassification(
        RecognizeAutoClassificationRequest &request
    );
    // 银行卡识别
    //
    // 识别银行卡上的关键文字信息，并返回识别的结构化结果。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeBankcardResponse> recognizeBankcard(
        RecognizeBankcardRequest &request
    );
    // 名片识别
    //
    // 识别名片图片上的文字信息，并返回识别的结构化结果。支持对多种不同版式名片进行结构化信息提取。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeBusinessCardResponse> recognizeBusinessCard(
        RecognizeBusinessCardRequest &request
    );
    // 营业执照识别
    //
    // 识别营业执照首页图片中的文字信息，并返回识别的结构化结果。
    // 
    // 说明： 
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeBusinessLicenseResponse> recognizeBusinessLicense(
        RecognizeBusinessLicenseRequest &request
    );
    // 智利身份证识别
    //
    // 识别智利身份证图片中的文字内容，并返回识别的结构化结果。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeChileIdCardResponse> recognizeChileIdCard(
        RecognizeChileIdCardRequest &request
    );
    // 驾驶证识别
    //
    // 识别用户上传的驾驶证图片（或者用户提供的华为云上OBS的驾驶证图片文件的URL）中主页与副页的文字内容，并将识别的结果返回给用户。
    // 
    // 说明： 
    // 
    // 如果图片中包含多张卡证票据，请调用智能分类识别服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeDriverLicenseResponse> recognizeDriverLicense(
        RecognizeDriverLicenseRequest &request
    );
    // 财务报表识别
    //
    // 识别用户上传的表格图片中的文字内容，并将识别的结果返回给用户。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeFinancialStatementResponse> recognizeFinancialStatement(
        RecognizeFinancialStatementRequest &request
    );
    // 飞机行程单识别
    //
    // 识别飞机行程单中的文字信息，并返回识别的结构化结果。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用智能分类识别服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeFlightItineraryResponse> recognizeFlightItinerary(
        RecognizeFlightItineraryRequest &request
    );
    // 通用表格识别
    //
    // 识别用于识别用户上传的通用表格图片（或者用户提供的华为云上OBS的通用表格图片文件的URL）中的文字内容，并将识别的结果返回给用户。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeGeneralTableResponse> recognizeGeneralTable(
        RecognizeGeneralTableRequest &request
    );
    // 通用文字识别
    //
    // 识别图片上的文字信息，返回识别的文字和坐标。支持扫描文件、电子文档、书籍、票据和表单等多种场景的文字识别。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeGeneralTextResponse> recognizeGeneralText(
        RecognizeGeneralTextRequest &request
    );
    // 手写文字识别
    //
    // 识别文档中的手写文字信息，并将识别的结构化结果返回给用户。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeHandwritingResponse> recognizeHandwriting(
        RecognizeHandwritingRequest &request
    );
    // 防疫健康码识别
    //
    // 识别防疫健康码中的文字信息，并将识别的结构化结果返回给用户。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeHealthCodeResponse> recognizeHealthCode(
        RecognizeHealthCodeRequest &request
    );
    // 身份证识别
    //
    // 识别身份证图片中的文字内容，并将识别的结果返回给用户。
    // 
    // 说明： 
    // 
    // 身份证识别支持中华人民共和国居民身份证识别。
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeIdCardResponse> recognizeIdCard(
        RecognizeIdCardRequest &request
    );
    // 保险单识别
    //
    // 识别保险单图片上的文字信息，并将识别的结构化结果返回给用户。支持对多板式保险单的扫描图片及手机照片进行结构化信息提取。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeInsurancePolicyResponse> recognizeInsurancePolicy(
        RecognizeInsurancePolicyRequest &request
    );
    // 发票验真
    //
    // 发票验真服务支持9种增值税发票的信息核验，包括增值税专用发票、增值税普通发票、增值税普通发票（卷式）、增值税电子专用发票、增值税电子普通发票、增值税电子普通发票（通行费）、二手车销售统一发票、机动车销售统一发票、区块链电子发票，支持返回票面的全部信息。该接口的使用限制请参见[约束与限制](https://support.huaweicloud.com/productdesc-ocr/ocr_01_0006.html)，详细使用指导请参见[OCR服务使用简介](https://support.huaweicloud.com/qs-ocr/ocr_05_0001.html)章节。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeInvoiceVerificationResponse> recognizeInvoiceVerification(
        RecognizeInvoiceVerificationRequest &request
    );
    // 车牌识别
    //
    // 识别输入图片中的车牌信息，并返回其坐标和内容。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeLicensePlateResponse> recognizeLicensePlate(
        RecognizeLicensePlateRequest &request
    );
    // 机动车销售发票识别
    //
    // 识别机动车销售发票图片中的文字内容，并将识别的结果返回给用户。
    // 
    // 说明：
    // 
    // 该增值税发票仅限于中华人民共和国境内使用的增值税发票。
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeMvsInvoiceResponse> recognizeMvsInvoice(
        RecognizeMvsInvoiceRequest &request
    );
    // 缅文驾驶证识别
    //
    // 识别缅甸驾驶证中的文字信息，并返回识别的结构化结果。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeMyanmarDriverLicenseResponse> recognizeMyanmarDriverLicense(
        RecognizeMyanmarDriverLicenseRequest &request
    );
    // 缅文身份证识别
    //
    // 识别缅文身份证中的文字信息，并返回识别的结构化结果。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeMyanmarIdcardResponse> recognizeMyanmarIdcard(
        RecognizeMyanmarIdcardRequest &request
    );
    // 护照识别
    //
    // 识别用户上传的护照首页图片中的文字信息，并返回识别的结构化结果。当前版本支持中国护照的全字段识别。外国护照支持护照下方两行国际标准化的机读码识别，并可从中提取6-7个关键字段信息。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizePassportResponse> recognizePassport(
        RecognizePassportRequest &request
    );
    // 从业资格证识别
    //
    // 识别道路运输从业资格证上的关键文字信息，并返回识别的结构化结果。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeQualificationCertificateResponse> recognizeQualificationCertificate(
        RecognizeQualificationCertificateRequest &request
    );
    // 定额发票识别
    //
    // 识别定额发票中的文字信息，并返回识别的结构化结果。
    // 
    // 说明： 
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeQuotaInvoiceResponse> recognizeQuotaInvoice(
        RecognizeQuotaInvoiceRequest &request
    );
    // 出租车发票识别
    //
    // 识别出租车发票中的文字信息，并返回识别的结构化结果。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用智能分类识别服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeTaxiInvoiceResponse> recognizeTaxiInvoice(
        RecognizeTaxiInvoiceRequest &request
    );
    // 泰文身份证识别
    //
    // 识别泰国身份证中的文字信息，并返回识别的结构化结果。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeThailandIdcardResponse> recognizeThailandIdcard(
        RecognizeThailandIdcardRequest &request
    );
    // 泰国车牌识别
    //
    // 识别泰国车牌图片中的车牌信息，并返回识别的结构化结果。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeThailandLicensePlateResponse> recognizeThailandLicensePlate(
        RecognizeThailandLicensePlateRequest &request
    );
    // 车辆通行费发票识别
    //
    // 识别车辆通行费发票中的文字信息，并返回识别的结构化结果。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeTollInvoiceResponse> recognizeTollInvoice(
        RecognizeTollInvoiceRequest &request
    );
    // 火车票识别
    //
    // 识别火车票中的文字信息，并返回识别的结构化结果。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用[智能分类识别](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;OCR&amp;api&#x3D;AutoClassification)服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeTrainTicketResponse> recognizeTrainTicket(
        RecognizeTrainTicketRequest &request
    );
    // 道路运输证识别
    //
    // 识别道路运输证首页中的文字信息，并返回识别的结构化结果。
    // 
    // 说明： 如果图片中包含多张卡证票据，请调用智能分类识别服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeTransportationLicenseResponse> recognizeTransportationLicense(
        RecognizeTransportationLicenseRequest &request
    );
    // 增值税发票识别
    //
    // 识别用户上传的增值税发票图片（或者用户提供的华为云上OBS的增值税发票图片文件的URL）中的文字内容，并将识别的结果返回给用户。
    // 
    // 说明：
    // 
    // 该增值税发票仅限于中华人民共和国境内使用的增值税发票。
    // 
    // 如果图片中包含多张卡证票据，请调用智能分类识别服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeVatInvoiceResponse> recognizeVatInvoice(
        RecognizeVatInvoiceRequest &request
    );
    // 行驶证识别
    //
    // 识别用户上传的行驶证图片（或者用户提供的华为云上OBS的行驶证图片文件的URL）中主页和副页的文字内容，并将识别的结果返回给用户。
    // 
    // 说明：
    // 
    // 如果图片中包含多张卡证票据，请调用智能分类识别服务。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeVehicleLicenseResponse> recognizeVehicleLicense(
        RecognizeVehicleLicenseRequest &request
    );
    // 电子面单识别
    //
    // 识别用户上传的韵达电子面单图片中的文字内容，并将识别的结果以json格式返回给用户。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeWaybillElectronicResponse> recognizeWaybillElectronic(
        RecognizeWaybillElectronicRequest &request
    );
    // 网络图片识别
    //
    // 识别网络图片中的文字内容，并返回识别的结构化结果。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RecognizeWebImageResponse> recognizeWebImage(
        RecognizeWebImageRequest &request
    );

    // VIN码识别
    //
    // 识别图片中的车架号信息，并将识别结果返回给用户。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
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

