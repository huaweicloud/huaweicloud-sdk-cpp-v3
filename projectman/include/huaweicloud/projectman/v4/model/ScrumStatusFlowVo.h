
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ScrumStatusFlowVo_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ScrumStatusFlowVo_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/ScrumStatusFlowDirectToVo.h>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ScrumStatusFlowVo
    : public ModelBase
{
public:
    ScrumStatusFlowVo();
    virtual ~ScrumStatusFlowVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScrumStatusFlowVo members

    /// <summary>
    /// 流转数据的uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态id
    /// </summary>

    int32_t getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(int32_t value);

    /// <summary>
    /// 流转到的数据
    /// </summary>

    std::vector<ScrumStatusFlowDirectToVo>& getDirectTo();
    bool directToIsSet() const;
    void unsetdirectTo();
    void setDirectTo(const std::vector<ScrumStatusFlowDirectToVo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t statusId_;
    bool statusIdIsSet_;
    std::vector<ScrumStatusFlowDirectToVo> directTo_;
    bool directToIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ScrumStatusFlowVo_H_
