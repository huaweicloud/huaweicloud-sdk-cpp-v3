
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictFileDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictFileDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ConflictFileDto
    : public ModelBase
{
public:
    ConflictFileDto();
    virtual ~ConflictFileDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConflictFileDto members

    /// <summary>
    /// 旧文件
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// 新文件
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);


protected:
    std::string oldPath_;
    bool oldPathIsSet_;
    std::string newPath_;
    bool newPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictFileDto_H_
