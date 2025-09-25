
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_data_source_bindings_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_data_source_bindings_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  NewExtension_data_source_bindings
    : public ModelBase
{
public:
    NewExtension_data_source_bindings();
    virtual ~NewExtension_data_source_bindings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NewExtension_data_source_bindings members

    /// <summary>
    /// **参数解释**： 目标地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展点id。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// **参数解释**： 数据源绑定名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDataSourceName() const;
    bool dataSourceNameIsSet() const;
    void unsetdataSourceName();
    void setDataSourceName(const std::string& value);


protected:
    std::string target_;
    bool targetIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    std::string dataSourceName_;
    bool dataSourceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_data_source_bindings_H_
