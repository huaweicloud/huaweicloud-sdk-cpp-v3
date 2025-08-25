
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateReleaseResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateReleaseResponse();
    virtual ~UpdateReleaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateReleaseResponse members

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getChartName() const;
    bool chartNameIsSet() const;
    void unsetchartName();
    void setChartName(const std::string& value);

    /// <summary>
    /// 是否公开模板
    /// </summary>

    bool isChartPublic() const;
    bool chartPublicIsSet() const;
    void unsetchartPublic();
    void setChartPublic(bool value);

    /// <summary>
    /// 模板版本
    /// </summary>

    std::string getChartVersion() const;
    bool chartVersionIsSet() const;
    void unsetchartVersion();
    void setChartVersion(const std::string& value);

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群名称
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 模板实例描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板实例所在的命名空间
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 模板实例参数
    /// </summary>

    std::string getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::string& value);

    /// <summary>
    /// 模板实例需要的资源
    /// </summary>

    std::string getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::string& value);

    /// <summary>
    /// 模板实例状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 模板实例状态描述
    /// </summary>

    std::string getStatusDescription() const;
    bool statusDescriptionIsSet() const;
    void unsetstatusDescription();
    void setStatusDescription(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// 模板实例的值
    /// </summary>

    std::string getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::string& value);

    /// <summary>
    /// 模板实例版本
    /// </summary>

    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int32_t value);


protected:
    std::string chartName_;
    bool chartNameIsSet_;
    bool chartPublic_;
    bool chartPublicIsSet_;
    std::string chartVersion_;
    bool chartVersionIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string parameters_;
    bool parametersIsSet_;
    std::string resources_;
    bool resourcesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusDescription_;
    bool statusDescriptionIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string values_;
    bool valuesIsSet_;
    int32_t version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseResponse_H_
