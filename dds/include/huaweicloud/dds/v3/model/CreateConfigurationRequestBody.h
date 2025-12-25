
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateConfigurationRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DatastoreResult.h>
#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_DDS_V3_EXPORT  CreateConfigurationRequestBody
    : public ModelBase
{
public:
    CreateConfigurationRequestBody();
    virtual ~CreateConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateConfigurationRequestBody members

    /// <summary>
    /// **参数解释：** 参数模板名称。 **约束限制：** 长度1到64位之间，区分大小写字母，可包含字母、数字、中划线、下划线或句点，不能包含其他特殊字符。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数模板描述。 **约束限制：** 长度不超过256位，且不能包含回车和&gt;!&lt;\&quot;&amp;&#39;&#x3D;特殊字符。 **取值范围：** 不涉及。 **默认取值：** 默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数名和参数值映射关系。用户可以基于默认参数模板的参数，自定义的参数值。 **约束限制：** 当未传入entity_id参数时，此参数必选。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::map<std::string, std::string>& getParameterValues();
    bool parameterValuesIsSet() const;
    void unsetparameterValues();
    void setParameterValues(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    DatastoreResult getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const DatastoreResult& value);

    /// <summary>
    /// **参数解释：** 实例ID或组ID或节点ID。可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 若传入此参数，则会基于此实例、组或节点的参数信息创建参数模板，将会忽略parameter_values和datastore传参。 **约束限制：** 不涉及。 **取值范围：** 当实例类型是集群，取值为shard组或config组的组ID、mongos节点的节点ID、只读节点的节点ID。 当实例类型是副本集，传值为实例ID或只读节点的节点ID。 当实例类型是单节点，传值为实例ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();
    void setEntityId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, std::string> parameterValues_;
    bool parameterValuesIsSet_;
    DatastoreResult datastore_;
    bool datastoreIsSet_;
    std::string entityId_;
    bool entityIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateConfigurationRequestBody_H_
