
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveConflictFileDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveConflictFileDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ResolveConflictFileDto
    : public ModelBase
{
public:
    ResolveConflictFileDto();
    virtual ~ResolveConflictFileDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResolveConflictFileDto members

    /// <summary>
    /// **参数解释：** 旧文件路径    
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 新文件路径    
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 只有选择接受不同分支选项的时候才需要    
    /// </summary>

    Object getSections() const;
    bool sectionsIsSet() const;
    void unsetsections();
    void setSections(const Object& value);

    /// <summary>
    /// **参数解释：** 只有在线编辑冲突文件的时候才需要，内容即为文件内容    
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string oldPath_;
    bool oldPathIsSet_;
    std::string newPath_;
    bool newPathIsSet_;
    Object sections_;
    bool sectionsIsSet_;
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveConflictFileDto_H_
