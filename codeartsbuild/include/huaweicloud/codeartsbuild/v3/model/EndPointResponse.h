
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/codeartsbuild/v3/model/EndPointResponse_created_by.h>
#include <huaweicloud/codeartsbuild/v3/model/EndPointResponse_authorization.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DomainsStatuses请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  EndPointResponse
    : public ModelBase
{
public:
    EndPointResponse();
    virtual ~EndPointResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndPointResponse members

    /// <summary>
    /// 
    /// </summary>

    EndPointResponse_authorization getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const EndPointResponse_authorization& value);

    /// <summary>
    /// uuid
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 访问地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 名称
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
    /// 区域名称
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// 数据
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
    /// 
    /// </summary>

    EndPointResponse_created_by getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const EndPointResponse_created_by& value);


protected:
    EndPointResponse_authorization authorization_;
    bool authorizationIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string regionName_;
    bool regionNameIsSet_;
    Object data_;
    bool dataIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    EndPointResponse_created_by createdBy_;
    bool createdByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_H_
