
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashBoardResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashBoardResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateDashBoardResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDashBoardResponse();
    virtual ~CreateDashBoardResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDashBoardResponse members

    /// <summary>
    /// 仪表盘图表
    /// </summary>

    std::vector<std::string>& getCharts();
    bool chartsIsSet() const;
    void unsetcharts();
    void setCharts(const std::vector<std::string>& value);

    /// <summary>
    /// 过滤条件
    /// </summary>

    std::vector<std::string>& getFilters();
    bool filtersIsSet() const;
    void unsetfilters();
    void setFilters(const std::vector<std::string>& value);

    /// <summary>
    /// 日志组名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 仪表盘id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 最近修改时间
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 仪表盘名称
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 是否使用模板
    /// </summary>

    std::string getUseSystemTemplate() const;
    bool useSystemTemplateIsSet() const;
    void unsetuseSystemTemplate();
    void setUseSystemTemplate(const std::string& value);


protected:
    std::vector<std::string> charts_;
    bool chartsIsSet_;
    std::vector<std::string> filters_;
    bool filtersIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string useSystemTemplate_;
    bool useSystemTemplateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashBoardResponse_H_
