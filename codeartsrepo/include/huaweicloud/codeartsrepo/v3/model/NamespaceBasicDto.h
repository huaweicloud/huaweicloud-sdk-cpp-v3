
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_NamespaceBasicDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_NamespaceBasicDto_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// namespace基本信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  NamespaceBasicDto
    : public ModelBase
{
public:
    NamespaceBasicDto();
    virtual ~NamespaceBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NamespaceBasicDto members

    /// <summary>
    /// namespace id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// namespace name
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// namespace path
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// namespace 开发模式
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// namespace region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// namespace cell
    /// </summary>

    std::string getCell() const;
    bool cellIsSet() const;
    void unsetcell();
    void setCell(const std::string& value);

    /// <summary>
    /// namespace kind
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// namespace full path
    /// </summary>

    std::string getFullPath() const;
    bool fullPathIsSet() const;
    void unsetfullPath();
    void setFullPath(const std::string& value);

    /// <summary>
    /// namespace full name
    /// </summary>

    std::string getFullName() const;
    bool fullNameIsSet() const;
    void unsetfullName();
    void setFullName(const std::string& value);

    /// <summary>
    /// namespace parent id
    /// </summary>

    int32_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(int32_t value);

    /// <summary>
    /// namespace visibility level
    /// </summary>

    int32_t getVisibilityLevel() const;
    bool visibilityLevelIsSet() const;
    void unsetvisibilityLevel();
    void setVisibilityLevel(int32_t value);

    /// <summary>
    /// namespace file control enable
    /// </summary>

    bool isEnableFileControl() const;
    bool enableFileControlIsSet() const;
    void unsetenableFileControl();
    void setEnableFileControl(bool value);

    /// <summary>
    /// namespace owner id
    /// </summary>

    int32_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string developMode_;
    bool developModeIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string cell_;
    bool cellIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    std::string fullName_;
    bool fullNameIsSet_;
    int32_t parentId_;
    bool parentIdIsSet_;
    int32_t visibilityLevel_;
    bool visibilityLevelIsSet_;
    bool enableFileControl_;
    bool enableFileControlIsSet_;
    int32_t ownerId_;
    bool ownerIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_NamespaceBasicDto_H_
