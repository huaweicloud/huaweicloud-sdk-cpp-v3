
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PathMap_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PathMap_H_


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
/// path:文件路径
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  PathMap
    : public ModelBase
{
public:
    PathMap();
    virtual ~PathMap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PathMap members

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


protected:
    std::string path_;
    bool pathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PathMap_H_
