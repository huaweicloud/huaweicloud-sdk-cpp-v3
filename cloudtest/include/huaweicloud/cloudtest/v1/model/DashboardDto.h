
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DashboardDto_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DashboardDto_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DashboardDto
    : public ModelBase
{
public:
    DashboardDto();
    virtual ~DashboardDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DashboardDto members

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 创建者
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 数据类型：0&#x3D;用例成功率；1&#x3D;用例时长
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 唯一ID，主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 看板标题
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 服务ID
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 任务ID列表
    /// </summary>

    std::vector<std::string>& getTaskIds();
    bool taskIdsIsSet() const;
    void unsettaskIds();
    void setTaskIds(const std::vector<std::string>& value);

    /// <summary>
    /// 任务类型，仅支持持续拨测和冒烟测试
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 修改者
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);

    /// <summary>
    /// 看板类型：0&#x3D;折线图；1&#x3D;散点图；2&#x3D;饼图
    /// </summary>

    std::string getViewType() const;
    bool viewTypeIsSet() const;
    void unsetviewType();
    void setViewType(const std::string& value);


protected:
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::vector<std::string> taskIds_;
    bool taskIdsIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;
    std::string viewType_;
    bool viewTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DashboardDto_H_
