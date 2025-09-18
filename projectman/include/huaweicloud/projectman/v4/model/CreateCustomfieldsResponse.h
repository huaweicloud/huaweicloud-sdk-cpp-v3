
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateCustomfieldsResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateCustomfieldsResponse();
    virtual ~CreateCustomfieldsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCustomfieldsResponse members

    /// <summary>
    /// 字段选项
    /// </summary>

    std::string getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::string& value);

    /// <summary>
    /// 系统字段
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 字段ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 字段ID
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// 工作项类型id 2任务/Task,3缺陷/Bug,5Epic,6Feature,7Story
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);

    /// <summary>
    /// 系统字段名
    /// </summary>

    std::string getCustomField() const;
    bool customFieldIsSet() const;
    void unsetcustomField();
    void setCustomField(const std::string& value);

    /// <summary>
    /// 字段类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 系统字段
    /// </summary>

    int32_t getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(int32_t value);

    /// <summary>
    /// 字段描述
    /// </summary>

    std::string getMemo() const;
    bool memoIsSet() const;
    void unsetmemo();
    void setMemo(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    std::string getModified() const;
    bool modifiedIsSet() const;
    void unsetmodified();
    void setModified(const std::string& value);

    /// <summary>
    /// 是否被删除
    /// </summary>

    bool isIsDelete() const;
    bool isDeleteIsSet() const;
    void unsetisDelete();
    void setIsDelete(bool value);


protected:
    std::string options_;
    bool optionsIsSet_;
    std::string region_;
    bool regionIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string identifier_;
    bool identifierIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;
    std::string customField_;
    bool customFieldIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t sort_;
    bool sortIsSet_;
    std::string memo_;
    bool memoIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string modified_;
    bool modifiedIsSet_;
    bool isDelete_;
    bool isDeleteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateCustomfieldsResponse_H_
