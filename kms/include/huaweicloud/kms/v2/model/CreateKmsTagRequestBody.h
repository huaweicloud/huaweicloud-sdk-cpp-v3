
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKmsTagRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKmsTagRequestBody_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/TagItem.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建KMS资源标签请求体。
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateKmsTagRequestBody
    : public ModelBase
{
public:
    CreateKmsTagRequestBody();
    virtual ~CreateKmsTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateKmsTagRequestBody members

    /// <summary>
    /// 
    /// </summary>

    TagItem getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const TagItem& value);

    /// <summary>
    /// 请求消息序列号，36字节序列号。 例如：919c82d4-8046-4722-9094-35c3c6524cff
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);


protected:
    TagItem tag_;
    bool tagIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKmsTagRequestBody_H_
