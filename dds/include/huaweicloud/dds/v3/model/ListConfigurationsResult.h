
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsResult_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsResult_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListConfigurationsResult
    : public ModelBase
{
public:
    ListConfigurationsResult();
    virtual ~ListConfigurationsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConfigurationsResult members

    /// <summary>
    /// **参数解释：** 参数模板ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数模板名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数模板描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据库版本。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDatastoreVersion() const;
    bool datastoreVersionIsSet() const;
    void unsetdatastoreVersion();
    void setDatastoreVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据库类型。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数模板节点类型。 **取值范围：** - mongos，表示集群mongos节点类型。 - shard，表示集群shard节点类型。 - config，表示集群config节点类型。 - replica，表示副本集类型。 - readonly，表示副本集只读节点类型。 - shard_readonly，表示集群只读节点类型。 - single，表示单节点类型。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间，格式为“yyyy-MM-ddTHH:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间，格式为“yyyy-MM-ddTHH:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否是用户自定义参数模板。 **取值范围：** - 取值为“false”，表示为系统默认参数模板。 - 取值为“true”，表示为用户自定义参数模板。
    /// </summary>

    bool isUserDefined() const;
    bool userDefinedIsSet() const;
    void unsetuserDefined();
    void setUserDefined(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string datastoreVersion_;
    bool datastoreVersionIsSet_;
    std::string datastoreName_;
    bool datastoreNameIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    bool userDefined_;
    bool userDefinedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsResult_H_
