
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Content_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Content_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Owner.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对象的元数据信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Content
    : public ModelBase
{
public:
    Content();
    virtual ~Content();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Content members

    /// <summary>
    /// 
    /// </summary>

    Owner getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const Owner& value);

    /// <summary>
    /// **参数解释**：对象的base64编码的128位MD5摘要。ETag是对象内容的唯一标识，可以通过该值识别对象内容是否有变化。比如上传对象时ETag为A，下载对象时ETag为B，则说明对象内容发生了变化。实际的ETag是对象的哈希值。ETag只反映变化的内容，而不是其元数据。上传的对象或拷贝操作创建的对象，通过MD5加密后都有唯一的ETag。 **约束限制**：当对象是服务端加密的对象时，ETag值不是对象的MD5值，而是通过服务端加密计算出的唯一标识。 **取值范围**：长度为32的字符串。
    /// </summary>

    std::string getEtag() const;
    bool etagIsSet() const;
    void unsetetag();
    void setEtag(const std::string& value);

    /// <summary>
    /// **参数解释**：对象类型。 **约束限制**：非Normal对象时返回。 **取值范围**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：对象名。对象名是对象在存储桶中的唯一标识。对象名是对象在桶中的完整路径，路径中不包含桶名。 **取值范围**：长度大于0且不超过1024的字符串。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：对象最近一次被修改的时间（UTC时间）。 **约束限制**：日期格式为ISO8601的格式。 **取值范围**：不涉及。
    /// </summary>

    std::string getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const std::string& value);

    /// <summary>
    /// **参数解释**：对象的字节数。 **取值范围**：0~48.8TB，单位：字节。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// **参数解释**：对象的存储类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getStorageClass() const;
    bool storageClassIsSet() const;
    void unsetstorageClass();
    void setStorageClass(const std::string& value);


protected:
    Owner owner_;
    bool ownerIsSet_;
    std::string etag_;
    bool etagIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string lastModified_;
    bool lastModifiedIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string storageClass_;
    bool storageClassIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Content_H_
