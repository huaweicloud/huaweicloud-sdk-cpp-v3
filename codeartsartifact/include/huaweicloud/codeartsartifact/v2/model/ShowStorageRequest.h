
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowStorageRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowStorageRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowStorageRequest
    : public ModelBase
{
public:
    ShowStorageRequest();
    virtual ~ShowStorageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStorageRequest members

    /// <summary>
    /// 类型列表
    /// </summary>

    std::string getFormatList() const;
    bool formatListIsSet() const;
    void unsetformatList();
    void setFormatList(const std::string& value);

    /// <summary>
    /// 是否在项目中
    /// </summary>

    std::string getInProject() const;
    bool inProjectIsSet() const;
    void unsetinProject();
    void setInProject(const std::string& value);


protected:
    std::string formatList_;
    bool formatListIsSet_;
    std::string inProject_;
    bool inProjectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStorageRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStorageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowStorageRequest_H_
