
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectVersionsV4ResponseBody_iterations_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectVersionsV4ResponseBody_iterations_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectVersionsV4ResponseBody_iterations
    : public ModelBase
{
public:
    ListProjectVersionsV4ResponseBody_iterations();
    virtual ~ListProjectVersionsV4ResponseBody_iterations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectVersionsV4ResponseBody_iterations members

    /// <summary>
    /// 迭代描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 迭代结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 迭代id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 迭代标题
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 迭代开始时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 迭代状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 迭代更新时间，长整型时间戳
    /// </summary>

    int64_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(int64_t value);

    /// <summary>
    /// 迭代是否已经删除，false, 未删除， true已经删除
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t updatedTime_;
    bool updatedTimeIsSet_;
    bool deleted_;
    bool deletedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectVersionsV4ResponseBody_iterations_H_
