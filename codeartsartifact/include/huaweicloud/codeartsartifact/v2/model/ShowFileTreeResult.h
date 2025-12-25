
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeResult_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/ShowFileTreeResult_children.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowFileTreeResult
    : public ModelBase
{
public:
    ShowFileTreeResult();
    virtual ~ShowFileTreeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFileTreeResult members

    /// <summary>
    /// **参数解释**: 上传权限。 **取值范围**: true：有权限。 false：无权限。 
    /// </summary>

    std::string getUploadAccess() const;
    bool uploadAccessIsSet() const;
    void unsetuploadAccess();
    void setUploadAccess(const std::string& value);

    /// <summary>
    /// **参数解释**: 总数。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(const std::string& value);

    /// <summary>
    /// **参数解释**: 父路径。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// **参数解释**: 子文件及文件夹信息。 **取值范围**: 不涉及。 
    /// </summary>

    std::vector<ShowFileTreeResult_children>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<ShowFileTreeResult_children>& value);


protected:
    std::string uploadAccess_;
    bool uploadAccessIsSet_;
    std::string total_;
    bool totalIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::vector<ShowFileTreeResult_children> children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeResult_H_
