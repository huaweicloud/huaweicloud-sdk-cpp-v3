
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusFlowDirectToVo_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusFlowDirectToVo_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  StatusFlowDirectToVo
    : public ModelBase
{
public:
    StatusFlowDirectToVo();
    virtual ~StatusFlowDirectToVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatusFlowDirectToVo members

    /// <summary>
    ///  父状态的名称
    /// </summary>

    std::string getParentName() const;
    bool parentNameIsSet() const;
    void unsetparentName();
    void setParentName(const std::string& value);

    /// <summary>
    /// 父状态的类型
    /// </summary>

    std::string getParentType() const;
    bool parentTypeIsSet() const;
    void unsetparentType();
    void setParentType(const std::string& value);

    /// <summary>
    /// 状态id
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态类型
    /// </summary>

    std::string getStatusType() const;
    bool statusTypeIsSet() const;
    void unsetstatusType();
    void setStatusType(const std::string& value);

    /// <summary>
    /// 是否已开启状态流转， true： 开启, false 没开启
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 父状态的uuid
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);


protected:
    std::string parentName_;
    bool parentNameIsSet_;
    std::string parentType_;
    bool parentTypeIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string statusType_;
    bool statusTypeIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusFlowDirectToVo_H_
