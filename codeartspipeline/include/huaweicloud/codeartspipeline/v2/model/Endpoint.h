
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Endpoint_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Endpoint_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/codeartspipeline/v2/model/EndpointCreatorInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// endpoint具体信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  Endpoint
    : public ModelBase
{
public:
    Endpoint();
    virtual ~Endpoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Endpoint members

    /// <summary>
    /// 
    /// </summary>

    EndpointCreatorInfo getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const EndpointCreatorInfo& value);

    /// <summary>
    /// 扩展点数据
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 模块名称（用于搜索）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 区域名
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// 链接地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 扩展点id
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);


protected:
    EndpointCreatorInfo createdBy_;
    bool createdByIsSet_;
    Object data_;
    bool dataIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string regionName_;
    bool regionNameIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string uuid_;
    bool uuidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Endpoint_H_
