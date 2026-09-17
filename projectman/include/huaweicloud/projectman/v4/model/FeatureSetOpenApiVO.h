
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FeatureSetOpenApiVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FeatureSetOpenApiVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/UserEntity.h>
#include <huaweicloud/projectman/v4/model/FeatureSetOpenApiVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 特性集OpenApi返回体
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  FeatureSetOpenApiVO
    : public ModelBase
{
public:
    FeatureSetOpenApiVO();
    virtual ~FeatureSetOpenApiVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FeatureSetOpenApiVO members

    /// <summary>
    /// 特性集ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 父特性集ID
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 位置信息
    /// </summary>

    std::string getPositionFloat() const;
    bool positionFloatIsSet() const;
    void unsetpositionFloat();
    void setPositionFloat(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const UserEntity& value);

    /// <summary>
    /// **参数解释**： 特性集创建时间的时间戳。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 特性集修改时间的时间戳。 **取值范围**： 不涉及。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 子特性集
    /// </summary>

    std::vector<FeatureSetOpenApiVO>& getChildFs();
    bool childFsIsSet() const;
    void unsetchildFs();
    void setChildFs(const std::vector<FeatureSetOpenApiVO>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string positionFloat_;
    bool positionFloatIsSet_;
    UserEntity createdBy_;
    bool createdByIsSet_;
    UserEntity modifiedBy_;
    bool modifiedByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::vector<FeatureSetOpenApiVO>* childFs_;
    bool childFsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FeatureSetOpenApiVO_H_
