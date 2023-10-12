
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateRandomResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateRandomResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateRandomResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateRandomResponse();
    virtual ~CreateRandomResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRandomResponse members

    /// <summary>
    /// 随机数16进制表示，两位表示1byte。随机数的长度与用户传入的参数 “random_data_length”的长度保持一致。
    /// </summary>

    std::string getRandomData() const;
    bool randomDataIsSet() const;
    void unsetrandomData();
    void setRandomData(const std::string& value);


protected:
    std::string randomData_;
    bool randomDataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateRandomResponse_H_
