
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateOrDeleteResourceTagsRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateOrDeleteResourceTagsRequestBody_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/smn/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  BatchCreateOrDeleteResourceTagsRequestBody
    : public ModelBase
{
public:
    BatchCreateOrDeleteResourceTagsRequestBody();
    virtual ~BatchCreateOrDeleteResourceTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateOrDeleteResourceTagsRequestBody members

    /// <summary>
    /// 标签列表，结构体说明请参见表1。删除时tags结构体不能缺失，key不能为空或空字符串，且不针对字符集范围进行校验。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 操作标识：仅限于create（创建）、delete（删除）。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateOrDeleteResourceTagsRequestBody_H_
