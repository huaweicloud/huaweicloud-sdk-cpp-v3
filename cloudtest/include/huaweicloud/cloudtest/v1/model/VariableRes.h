
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_VariableRes_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_VariableRes_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  VariableRes
    : public ModelBase
{
public:
    VariableRes();
    virtual ~VariableRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VariableRes members

    /// <summary>
    /// 
    /// </summary>

    int32_t getByOrder() const;
    bool byOrderIsSet() const;
    void unsetbyOrder();
    void setByOrder(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int64_t getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreateTimeString() const;
    bool createTimeStringIsSet() const;
    void unsetcreateTimeString();
    void setCreateTimeString(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCurrentPermission() const;
    bool currentPermissionIsSet() const;
    void unsetcurrentPermission();
    void setCurrentPermission(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isDynamicParamFlag() const;
    bool dynamicParamFlagIsSet() const;
    void unsetdynamicParamFlag();
    void setDynamicParamFlag(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFunctionParams() const;
    bool functionParamsIsSet() const;
    void unsetfunctionParams();
    void setFunctionParams(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isIsSensitiveInfo() const;
    bool isSensitiveInfoIsSet() const;
    void unsetisSensitiveInfo();
    void setIsSensitiveInfo(bool value);

    /// <summary>
    /// 
    /// </summary>

    bool isIsSensitiveModified() const;
    bool isSensitiveModifiedIsSet() const;
    void unsetisSensitiveModified();
    void setIsSensitiveModified(bool value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getParentNodeId() const;
    bool parentNodeIdIsSet() const;
    void unsetparentNodeId();
    void setParentNodeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSensitiveInfoSetterTime() const;
    bool sensitiveInfoSetterTimeIsSet() const;
    void unsetsensitiveInfoSetterTime();
    void setSensitiveInfoSetterTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSensitiveInfoSetterUser() const;
    bool sensitiveInfoSetterUserIsSet() const;
    void unsetsensitiveInfoSetterUser();
    void setSensitiveInfoSetterUser(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int64_t getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUpdateTimeString() const;
    bool updateTimeStringIsSet() const;
    void unsetupdateTimeString();
    void setUpdateTimeString(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getVariableType() const;
    bool variableTypeIsSet() const;
    void unsetvariableType();
    void setVariableType(int32_t value);


protected:
    int32_t byOrder_;
    bool byOrderIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    int64_t createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string createTimeString_;
    bool createTimeStringIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string currentPermission_;
    bool currentPermissionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool dynamicParamFlag_;
    bool dynamicParamFlagIsSet_;
    std::string functionParams_;
    bool functionParamsIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string id_;
    bool idIsSet_;
    bool isSensitiveInfo_;
    bool isSensitiveInfoIsSet_;
    bool isSensitiveModified_;
    bool isSensitiveModifiedIsSet_;
    int32_t locked_;
    bool lockedIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    int32_t nodeType_;
    bool nodeTypeIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string parentNodeId_;
    bool parentNodeIdIsSet_;
    std::string property_;
    bool propertyIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string sensitiveInfoSetterTime_;
    bool sensitiveInfoSetterTimeIsSet_;
    std::string sensitiveInfoSetterUser_;
    bool sensitiveInfoSetterUserIsSet_;
    std::string sourceId_;
    bool sourceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeStamp_;
    bool updateTimeStampIsSet_;
    std::string updateTimeString_;
    bool updateTimeStringIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;
    int32_t variableType_;
    bool variableTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_VariableRes_H_
