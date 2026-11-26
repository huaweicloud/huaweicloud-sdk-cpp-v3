
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetFileResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetFileResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Content.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAssetFileResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetFileResponse();
    virtual ~ListAssetFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetFileResponse members

    /// <summary>
    /// **参数解释**：列举的对象内容。
    /// </summary>

    std::vector<Content>& getContents();
    bool contentsIsSet() const;
    void unsetcontents();
    void setContents(const std::vector<Content>& value);

    /// <summary>
    /// **参数解释**：表明本次返回的结果列表是否被截断。“true”表示本次没有返回全部结果；“false”表示本次已经返回了全部结果。 **取值范围**：true,false。
    /// </summary>

    bool isIsTruncated() const;
    bool isTruncatedIsSet() const;
    void unsetisTruncated();
    void setIsTruncated(bool value);

    /// <summary>
    /// **参数解释**：列举桶内对象列表时，指定一个标识符，作为列举时的起始位置，从该标识符以后按对象名的字典顺序返回对象列表。 **取值范围**：长度大于0且不超过1024的字符串。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// **参数解释**：如果本次没有返回全部结果，响应请求中将包含此字段，用于标明本次请求列举到的最后一个对象。后续请求可以指定Marker等于该值来列举剩余的对象。 **取值范围**：长度大于0且不超过1024的字符串。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// **参数解释**：列举对象的最大数目，返回的对象列表将是按照字典顺序的最多前max_keys个对象。 **取值范围**：1-1000。
    /// </summary>

    int32_t getMaxKeys() const;
    bool maxKeysIsSet() const;
    void unsetmaxKeys();
    void setMaxKeys(int32_t value);

    /// <summary>
    /// **参数解释**：本次请求的桶名。 **约束限制**：桶的名字需全局唯一，不能与已有的任何桶名称重复，包括其他用户创建的桶。   桶命名规则如下：   - 3～63个字符，数字或字母开头，支持小写字母、数字、“-”、“.”。   - 禁止使用IP地址。   - 禁止以“-”或“.”开头及结尾。   - 禁止两个“.”相邻（如：“my..bucket”）。   - 禁止“.”和“-”相邻（如：“my-.bucket”和“my.-bucket”）。   - 同一用户在同一个区域多次创建同名桶不会报错，创建的桶属性以第一次请求为准。 **取值范围**：不涉及。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// **参数解释**：列举桶内对象列表时，指定一个前缀，限定返回的对象名必须带有prefix前缀。 **取值范围**：不涉及。
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// **参数解释**：列举桶内对象列表时，指定前缀列表，限定返回的对象名必须带有prefix前缀。
    /// </summary>

    std::vector<std::string>& getCommonPrefixes();
    bool commonPrefixesIsSet() const;
    void unsetcommonPrefixes();
    void setCommonPrefixes(const std::vector<std::string>& value);


protected:
    std::vector<Content> contents_;
    bool contentsIsSet_;
    bool isTruncated_;
    bool isTruncatedIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    int32_t maxKeys_;
    bool maxKeysIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string prefix_;
    bool prefixIsSet_;
    std::vector<std::string> commonPrefixes_;
    bool commonPrefixesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetFileResponse_H_
