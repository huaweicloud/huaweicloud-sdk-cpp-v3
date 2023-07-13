
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_TemplateGroupCollection_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_TemplateGroupCollection_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/TemplateGroup.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  TemplateGroupCollection
    : public ModelBase
{
public:
    TemplateGroupCollection();
    virtual ~TemplateGroupCollection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TemplateGroupCollection members

    /// <summary>
    /// 模板组集合id&lt;br/&gt; 
    /// </summary>

    std::string getGroupCollectionId() const;
    bool groupCollectionIdIsSet() const;
    void unsetgroupCollectionId();
    void setGroupCollectionId(const std::string& value);

    /// <summary>
    /// 模板组集合名称&lt;br/&gt; 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板介绍&lt;br/&gt; 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 转码组列表&lt;br/&gt; 
    /// </summary>

    std::vector<TemplateGroup>& getTemplateGroupList();
    bool templateGroupListIsSet() const;
    void unsettemplateGroupList();
    void setTemplateGroupList(const std::vector<TemplateGroup>& value);


protected:
    std::string groupCollectionId_;
    bool groupCollectionIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<TemplateGroup> templateGroupList_;
    bool templateGroupListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_TemplateGroupCollection_H_
