
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKmsTagsResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKmsTagsResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/TagItem.h>
#include <vector>

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
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKmsTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKmsTagsResponse();
    virtual ~ShowKmsTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKmsTagsResponse members

    /// <summary>
    /// 标签列表，key和value键值对的集合。  - key：表示标签键，一个密钥下最多包含10个key，key不能为空，不能重复，同一个key中value不能重复。key最大长度为36个字符。  - value：表示标签值。每个值最大长度43个字符，value之间为“与”的关系。
    /// </summary>

    std::vector<TagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagItem>& value);

    /// <summary>
    /// 密钥的标签个数。。
    /// </summary>

    int32_t getExistTagsNum() const;
    bool existTagsNumIsSet() const;
    void unsetexistTagsNum();
    void setExistTagsNum(int32_t value);


protected:
    std::vector<TagItem> tags_;
    bool tagsIsSet_;
    int32_t existTagsNum_;
    bool existTagsNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKmsTagsResponse_H_
