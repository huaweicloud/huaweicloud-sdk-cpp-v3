
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDETrashArtifactModel_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDETrashArtifactModel_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  IDETrashArtifactModel
    : public ModelBase
{
public:
    IDETrashArtifactModel();
    virtual ~IDETrashArtifactModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IDETrashArtifactModel members

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 当前仓库状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 待还原的文件路径
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string uri_;
    bool uriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDETrashArtifactModel_H_
