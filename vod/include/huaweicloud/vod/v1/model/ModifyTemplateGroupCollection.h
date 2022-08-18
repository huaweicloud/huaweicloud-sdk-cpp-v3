
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTemplateGroupCollection_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTemplateGroupCollection_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ModifyTemplateGroupCollection
    : public ModelBase
{
public:
    ModifyTemplateGroupCollection();
    virtual ~ModifyTemplateGroupCollection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyTemplateGroupCollection members

    /// <summary>
    /// 模板组集合名称&lt;br/&gt; 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板组集合ID&lt;br/&gt; 
    /// </summary>

    std::string getCollectionId() const;
    bool collectionIdIsSet() const;
    void unsetcollectionId();
    void setCollectionId(const std::string& value);

    /// <summary>
    /// 模板组集合介绍&lt;br/&gt; 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板组列表&lt;br/&gt; 
    /// </summary>

    std::vector<std::string>& getTemplateGroupList();
    bool templateGroupListIsSet() const;
    void unsettemplateGroupList();
    void setTemplateGroupList(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string collectionId_;
    bool collectionIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> templateGroupList_;
    bool templateGroupListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTemplateGroupCollection_H_
