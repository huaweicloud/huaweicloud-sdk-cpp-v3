
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTagsReqbody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTagsReqbody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/lts/v2/model/TagsBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateTagsReqbody
    : public ModelBase
{
public:
    CreateTagsReqbody();
    virtual ~CreateTagsReqbody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTagsReqbody members

    /// <summary>
    /// 添加标签方式
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 是否对外接口调用
    /// </summary>

    bool isIsOpen() const;
    bool isOpenIsSet() const;
    void unsetisOpen();
    void setIsOpen(bool value);

    /// <summary>
    /// 标签字段信息
    /// </summary>

    std::vector<TagsBody>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsBody>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    bool isOpen_;
    bool isOpenIsSet_;
    std::vector<TagsBody> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTagsReqbody_H_
