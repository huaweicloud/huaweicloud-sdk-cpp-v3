
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_TrashArtifactModelForDelete_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_TrashArtifactModelForDelete_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  TrashArtifactModelForDelete
    : public ModelBase
{
public:
    TrashArtifactModelForDelete();
    virtual ~TrashArtifactModelForDelete();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrashArtifactModelForDelete members

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 仓库类型
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 路径白名单
    /// </summary>

    std::string getIncludePattern() const;
    bool includePatternIsSet() const;
    void unsetincludePattern();
    void setIncludePattern(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string includePattern_;
    bool includePatternIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_TrashArtifactModelForDelete_H_
