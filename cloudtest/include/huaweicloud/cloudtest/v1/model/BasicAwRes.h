
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicAwRes_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicAwRes_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BasicAwRes
    : public ModelBase
{
public:
    BasicAwRes();
    virtual ~BasicAwRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasicAwRes members

    /// <summary>
    /// 
    /// </summary>

    std::string getAwCode() const;
    bool awCodeIsSet() const;
    void unsetawCode();
    void setAwCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAwDescription() const;
    bool awDescriptionIsSet() const;
    void unsetawDescription();
    void setAwDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getAwMark() const;
    bool awMarkIsSet() const;
    void unsetawMark();
    void setAwMark(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAwOperationid() const;
    bool awOperationidIsSet() const;
    void unsetawOperationid();
    void setAwOperationid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAwTags() const;
    bool awTagsIsSet() const;
    void unsetawTags();
    void setAwTags(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getAwType() const;
    bool awTypeIsSet() const;
    void unsetawType();
    void setAwType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAwUniqueid() const;
    bool awUniqueidIsSet() const;
    void unsetawUniqueid();
    void setAwUniqueid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getByOrder() const;
    bool byOrderIsSet() const;
    void unsetbyOrder();
    void setByOrder(int32_t value);

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

    std::string getCreateUserId() const;
    bool createUserIdIsSet() const;
    void unsetcreateUserId();
    void setCreateUserId(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getDeleteTime() const;
    bool deleteTimeIsSet() const;
    void unsetdeleteTime();
    void setDeleteTime(const std::string& value);

    /// <summary>
    /// 删除人
    /// </summary>

    std::string getDeleteUser() const;
    bool deleteUserIsSet() const;
    void unsetdeleteUser();
    void setDeleteUser(const std::string& value);

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

    std::vector<Object>& getDftCheckPointList();
    bool dftCheckPointListIsSet() const;
    void unsetdftCheckPointList();
    void setDftCheckPointList(const std::vector<Object>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Object>& getDftCustomHeader();
    bool dftCustomHeaderIsSet() const;
    void unsetdftCustomHeader();
    void setDftCustomHeader(const std::vector<Object>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDftRetryInterval() const;
    bool dftRetryIntervalIsSet() const;
    void unsetdftRetryInterval();
    void setDftRetryInterval(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDftRetryTimes() const;
    bool dftRetryTimesIsSet() const;
    void unsetdftRetryTimes();
    void setDftRetryTimes(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Object>& getDftVariableList();
    bool dftVariableListIsSet() const;
    void unsetdftVariableList();
    void setDftVariableList(const std::vector<Object>& value);

    /// <summary>
    /// 
    /// </summary>

    Object getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getHasCode() const;
    bool hasCodeIsSet() const;
    void unsethasCode();
    void setHasCode(int32_t value);

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

    std::vector<std::string>& getImportPackage();
    bool importPackageIsSet() const;
    void unsetimportPackage();
    void setImportPackage(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getInterfaceLabel() const;
    bool interfaceLabelIsSet() const;
    void unsetinterfaceLabel();
    void setInterfaceLabel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getIsFavorite() const;
    bool isFavoriteIsSet() const;
    void unsetisFavorite();
    void setIsFavorite(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMethod() const;
    bool methodIsSet() const;
    void unsetmethod();
    void setMethod(const std::string& value);

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

    std::string getNameView() const;
    bool nameViewIsSet() const;
    void unsetnameView();
    void setNameView(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getOriginProject() const;
    bool originProjectIsSet() const;
    void unsetoriginProject();
    void setOriginProject(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Object>& getParamTypeAndDftValue();
    bool paramTypeAndDftValueIsSet() const;
    void unsetparamTypeAndDftValue();
    void setParamTypeAndDftValue(const std::vector<Object>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getProtocolType() const;
    bool protocolTypeIsSet() const;
    void unsetprotocolType();
    void setProtocolType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Object getPublicAwLib() const;
    bool publicAwLibIsSet() const;
    void unsetpublicAwLib();
    void setPublicAwLib(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPublicAwLibId() const;
    bool publicAwLibIdIsSet() const;
    void unsetpublicAwLibId();
    void setPublicAwLibId(const std::string& value);

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

    std::string getReturnType() const;
    bool returnTypeIsSet() const;
    void unsetreturnType();
    void setReturnType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getSpecialType() const;
    bool specialTypeIsSet() const;
    void unsetspecialType();
    void setSpecialType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTmssCaseNumber() const;
    bool tmssCaseNumberIsSet() const;
    void unsettmssCaseNumber();
    void setTmssCaseNumber(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTmssCaseId() const;
    bool tmssCaseIdIsSet() const;
    void unsettmssCaseId();
    void setTmssCaseId(const std::string& value);

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

    std::string getWarningMsg() const;
    bool warningMsgIsSet() const;
    void unsetwarningMsg();
    void setWarningMsg(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getYamlName() const;
    bool yamlNameIsSet() const;
    void unsetyamlName();
    void setYamlName(const std::string& value);


protected:
    std::string awCode_;
    bool awCodeIsSet_;
    std::string awDescription_;
    bool awDescriptionIsSet_;
    int32_t awMark_;
    bool awMarkIsSet_;
    std::string awOperationid_;
    bool awOperationidIsSet_;
    std::string awTags_;
    bool awTagsIsSet_;
    int32_t awType_;
    bool awTypeIsSet_;
    std::string awUniqueid_;
    bool awUniqueidIsSet_;
    int32_t byOrder_;
    bool byOrderIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    int64_t createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string createTimeString_;
    bool createTimeStringIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string createUserId_;
    bool createUserIdIsSet_;
    std::string deleteTime_;
    bool deleteTimeIsSet_;
    std::string deleteUser_;
    bool deleteUserIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<Object> dftCheckPointList_;
    bool dftCheckPointListIsSet_;
    std::vector<Object> dftCustomHeader_;
    bool dftCustomHeaderIsSet_;
    std::string dftRetryInterval_;
    bool dftRetryIntervalIsSet_;
    std::string dftRetryTimes_;
    bool dftRetryTimesIsSet_;
    std::vector<Object> dftVariableList_;
    bool dftVariableListIsSet_;
    Object extraInfo_;
    bool extraInfoIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    int32_t hasCode_;
    bool hasCodeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> importPackage_;
    bool importPackageIsSet_;
    std::string interfaceLabel_;
    bool interfaceLabelIsSet_;
    int32_t isFavorite_;
    bool isFavoriteIsSet_;
    std::string method_;
    bool methodIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameView_;
    bool nameViewIsSet_;
    std::string originProject_;
    bool originProjectIsSet_;
    std::vector<Object> paramTypeAndDftValue_;
    bool paramTypeAndDftValueIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string protocolType_;
    bool protocolTypeIsSet_;
    Object publicAwLib_;
    bool publicAwLibIsSet_;
    std::string publicAwLibId_;
    bool publicAwLibIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string returnType_;
    bool returnTypeIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;
    std::string source_;
    bool sourceIsSet_;
    int32_t specialType_;
    bool specialTypeIsSet_;
    std::string tmssCaseNumber_;
    bool tmssCaseNumberIsSet_;
    std::string tmssCaseId_;
    bool tmssCaseIdIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeStamp_;
    bool updateTimeStampIsSet_;
    std::string updateTimeString_;
    bool updateTimeStringIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;
    std::string warningMsg_;
    bool warningMsgIsSet_;
    std::string yamlName_;
    bool yamlNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicAwRes_H_
