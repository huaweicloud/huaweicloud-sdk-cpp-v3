#ifndef HUAWEICLOUD_SDK_IVS_V2_IvsClient_H_
#define HUAWEICLOUD_SDK_IVS_V2_IvsClient_H_

#include <huaweicloud/ivs/v2/IvsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ivs/v2/model/DetectExtentionByIdCardImageRequest.h>
#include <huaweicloud/ivs/v2/model/DetectExtentionByIdCardImageResponse.h>
#include <huaweicloud/ivs/v2/model/DetectExtentionByNameAndIdRequest.h>
#include <huaweicloud/ivs/v2/model/DetectExtentionByNameAndIdResponse.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByIdCardImageRequest.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByIdCardImageResponse.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByNameAndIdRequest.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByNameAndIdResponse.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByVideoAndIdCardImageRequest.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByVideoAndIdCardImageResponse.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByVideoAndNameAndIdRequest.h>
#include <huaweicloud/ivs/v2/model/DetectStandardByVideoAndNameAndIdResponse.h>
#include <huaweicloud/ivs/v2/model/IvsExtentionByIdCardImageRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsExtentionByNameAndIdRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsStandardByIdCardImageRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsStandardByNameAndIdRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsStandardByVideoAndIdCardImageRequestBody.h>
#include <huaweicloud/ivs/v2/model/IvsStandardByVideoAndNameAndIdRequestBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ivs::V2::Model;

class HUAWEICLOUD_IVS_V2_EXPORT  IvsClient : public Client
{
public:

    IvsClient();

    virtual ~IvsClient();

    static ClientBuilder<IvsClient> newBuilder();

    // 人证核身证件版（二要素）
    //
    // 使用姓名、身份证号码二要素进行身份审核。身份验证时，传入的数据为身份证信息。提取身份证信息时，可以使用身份证正反面图片，也可以直接输入姓名、身份证号文本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectExtentionByIdCardImageResponse> detectExtentionByIdCardImage(
        DetectExtentionByIdCardImageRequest &request
    );
    // 人证核身证件版（二要素）
    //
    // 使用姓名、身份证号码二要素进行身份审核。身份验证时，传入的数据为身份证信息。提取身份证信息时，可以使用身份证正反面图片，也可以直接输入姓名、身份证号文本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectExtentionByNameAndIdResponse> detectExtentionByNameAndId(
        DetectExtentionByNameAndIdRequest &request
    );
    // 人证核身标准版（三要素）
    //
    // 使用身份证正反面图片提取姓名和身份证号码，与人脸图片进行三要素身份审核。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectStandardByIdCardImageResponse> detectStandardByIdCardImage(
        DetectStandardByIdCardImageRequest &request
    );
    // 人证核身标准版（三要素）
    //
    // 使用姓名、身份证号文本和人脸图片进行三要素身份审核。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectStandardByNameAndIdResponse> detectStandardByNameAndId(
        DetectStandardByNameAndIdRequest &request
    );
    // 人证核身标准版（三要素）
    //
    // 从身份证正反面图片中提取姓名和身份证号码，并对视频做活体检测后提取人脸图片，以此进行三要素身份审核。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectStandardByVideoAndIdCardImageResponse> detectStandardByVideoAndIdCardImage(
        DetectStandardByVideoAndIdCardImageRequest &request
    );
    // 人证核身标准版（三要素）
    //
    // 使用姓名、身份证号文本，并对视频做活体检测后提取人脸图片，以此进行三要素身份审核。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectStandardByVideoAndNameAndIdResponse> detectStandardByVideoAndNameAndId(
        DetectStandardByVideoAndNameAndIdRequest &request
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

template class HUAWEICLOUD_IVS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ivs::V2::IvsClient>;

#endif // HUAWEICLOUD_SDK_IVS_V2_IvsClient_H_

