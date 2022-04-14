
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchCreateOrDeleteTagsRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchCreateOrDeleteTagsRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/TagItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  BatchCreateOrDeleteTagsRequestBody
    : public ModelBase
{
public:
    BatchCreateOrDeleteTagsRequestBody();
    virtual ~BatchCreateOrDeleteTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateOrDeleteTagsRequestBody members

    /// <summary>
    /// 标签列表，key和value键值对的集合。
    /// </summary>

    std::vector<TagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagItem>& value);

    /// <summary>
    /// 操作标识： 仅限于“create”和“delete”。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 请求消息序列号，36字节序列号。 例如：919c82d4-8046-4722-9094-35c3c6524cff
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);


protected:
    std::vector<TagItem> tags_;
    bool tagsIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchCreateOrDeleteTagsRequestBody_H_
