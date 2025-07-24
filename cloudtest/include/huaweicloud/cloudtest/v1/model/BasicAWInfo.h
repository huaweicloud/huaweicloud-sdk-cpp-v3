
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicAWInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicAWInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/BasicAWInfo.h>
#include <huaweicloud/cloudtest/v1/model/AwVariable.h>
#include <huaweicloud/cloudtest/v1/model/AwParam.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AwInstanceRes.h>
#include <huaweicloud/cloudtest/v1/model/JsonNode.h>
#include <huaweicloud/cloudtest/v1/model/CheckPoint.h>
#include <huaweicloud/cloudtest/v1/model/PublicAwLibRes.h>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/UploadFileRes.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BasicAWInfo
    : public ModelBase
{
public:
    BasicAWInfo();
    virtual ~BasicAWInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasicAWInfo members

    /// <summary>
    /// aw代码, hasCode为1时有效
    /// </summary>

    std::string getAwCode() const;
    bool awCodeIsSet() const;
    void unsetawCode();
    void setAwCode(const std::string& value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getAwDescription() const;
    bool awDescriptionIsSet() const;
    void unsetawDescription();
    void setAwDescription(const std::string& value);

    /// <summary>
    /// 组合aw包含的aw实例信息，awType为2时该字段有效
    /// </summary>

    std::vector<AwInstanceRes>& getAwInsList();
    bool awInsListIsSet() const;
    void unsetawInsList();
    void setAwInsList(const std::vector<AwInstanceRes>& value);

    /// <summary>
    /// aw标记 0-normal；1-new；2-update 3-delete
    /// </summary>

    int32_t getAwMark() const;
    bool awMarkIsSet() const;
    void unsetawMark();
    void setAwMark(int32_t value);

    /// <summary>
    /// 接口的operationId
    /// </summary>

    std::string getAwOperationid() const;
    bool awOperationidIsSet() const;
    void unsetawOperationid();
    void setAwOperationid(const std::string& value);

    /// <summary>
    /// 接口的tags
    /// </summary>

    std::string getAwTags() const;
    bool awTagsIsSet() const;
    void unsetawTags();
    void setAwTags(const std::string& value);

    /// <summary>
    /// AW类型1-普通aw,2-组合aw,3-导入aw
    /// </summary>

    int32_t getAwType() const;
    bool awTypeIsSet() const;
    void unsetawType();
    void setAwType(int32_t value);

    /// <summary>
    /// awOperationId_awTags的拼接
    /// </summary>

    std::string getAwUniqueid() const;
    bool awUniqueidIsSet() const;
    void unsetawUniqueid();
    void setAwUniqueid(const std::string& value);

    /// <summary>
    /// 顺序
    /// </summary>

    int32_t getByOrder() const;
    bool byOrderIsSet() const;
    void unsetbyOrder();
    void setByOrder(int32_t value);

    /// <summary>
    /// 目录层级
    /// </summary>

    int32_t getCataType() const;
    bool cataTypeIsSet() const;
    void unsetcataType();
    void setCataType(int32_t value);

    /// <summary>
    /// 新增childList以支持嵌套层级结构
    /// </summary>

    std::vector<BasicAWInfo>& getChildList();
    bool childListIsSet() const;
    void unsetchildList();
    void setChildList(const std::vector<BasicAWInfo>& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 时间戳字段
    /// </summary>

    int64_t getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(int64_t value);

    /// <summary>
    /// 时间字符串
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
    /// 创建人id
    /// </summary>

    std::string getCreateUserId() const;
    bool createUserIdIsSet() const;
    void unsetcreateUserId();
    void setCreateUserId(const std::string& value);

    /// <summary>
    /// aw库的文件列表
    /// </summary>

    std::vector<UploadFileRes>& getCustomAwLibs();
    bool customAwLibsIsSet() const;
    void unsetcustomAwLibs();
    void setCustomAwLibs(const std::vector<UploadFileRes>& value);

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
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 默认检查点List
    /// </summary>

    std::vector<CheckPoint>& getDftCheckPointList();
    bool dftCheckPointListIsSet() const;
    void unsetdftCheckPointList();
    void setDftCheckPointList(const std::vector<CheckPoint>& value);

    /// <summary>
    /// 默认请求头参数对象
    /// </summary>

    std::vector<AwParam>& getDftCustomHeader();
    bool dftCustomHeaderIsSet() const;
    void unsetdftCustomHeader();
    void setDftCustomHeader(const std::vector<AwParam>& value);

    /// <summary>
    /// 重试间隔时间 (ms) 为空表示不等待
    /// </summary>

    std::string getDftRetryInterval() const;
    bool dftRetryIntervalIsSet() const;
    void unsetdftRetryInterval();
    void setDftRetryInterval(const std::string& value);

    /// <summary>
    /// 重试次数
    /// </summary>

    std::string getDftRetryTimes() const;
    bool dftRetryTimesIsSet() const;
    void unsetdftRetryTimes();
    void setDftRetryTimes(const std::string& value);

    /// <summary>
    /// 默认变量信息List
    /// </summary>

    std::vector<AwVariable>& getDftVariableList();
    bool dftVariableListIsSet() const;
    void unsetdftVariableList();
    void setDftVariableList(const std::vector<AwVariable>& value);

    /// <summary>
    /// 
    /// </summary>

    JsonNode getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const JsonNode& value);

    /// <summary>
    /// 组名
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 是否自带代码 0-不自带代码，该aw依赖source字段中的源；1-自带代码
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
    /// 导入的包
    /// </summary>

    std::vector<std::string>& getImportPackage();
    bool importPackageIsSet() const;
    void unsetimportPackage();
    void setImportPackage(const std::vector<std::string>& value);

    /// <summary>
    /// 接口的x-extend
    /// </summary>

    std::string getInterfaceLabel() const;
    bool interfaceLabelIsSet() const;
    void unsetinterfaceLabel();
    void setInterfaceLabel(const std::string& value);

    /// <summary>
    /// 是否是当前工程的收藏aw，该字段不存数据库，每次获取时实时判断
    /// </summary>

    int32_t getIsFavorite() const;
    bool isFavoriteIsSet() const;
    void unsetisFavorite();
    void setIsFavorite(int32_t value);

    /// <summary>
    /// 判断是否为文件夹的标识
    /// </summary>

    std::string getIsFolder() const;
    bool isFolderIsSet() const;
    void unsetisFolder();
    void setIsFolder(const std::string& value);

    /// <summary>
    /// 关键字局部变量
    /// </summary>

    std::vector<AwVariable>& getKeywordVariableValue();
    bool keywordVariableValueIsSet() const;
    void unsetkeywordVariableValue();
    void setKeywordVariableValue(const std::vector<AwVariable>& value);

    /// <summary>
    /// 方法
    /// </summary>

    std::string getMethod() const;
    bool methodIsSet() const;
    void unsetmethod();
    void setMethod(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// aw在页面上显示的名字
    /// </summary>

    std::string getNameView() const;
    bool nameViewIsSet() const;
    void unsetnameView();
    void setNameView(const std::string& value);

    /// <summary>
    /// 源工程信息，如果该aw是从其他工程过来的(继承或者copy to local)
    /// </summary>

    std::string getOriginProject() const;
    bool originProjectIsSet() const;
    void unsetoriginProject();
    void setOriginProject(const std::string& value);

    /// <summary>
    /// 组合aw的输出参数信息，该字段不存数据库，实时获取
    /// </summary>

    std::vector<AwVariable>& getOutputParamList();
    bool outputParamListIsSet() const;
    void unsetoutputParamList();
    void setOutputParamList(const std::vector<AwVariable>& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 参数类型和参数默认值对应List
    /// </summary>

    std::vector<AwParam>& getParamTypeAndDftValue();
    bool paramTypeAndDftValueIsSet() const;
    void unsetparamTypeAndDftValue();
    void setParamTypeAndDftValue(const std::vector<AwParam>& value);

    /// <summary>
    /// aw目录父编号
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// aw目录父编号
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 协议类型 (http/dsf/other)
    /// </summary>

    std::string getProtocolType() const;
    bool protocolTypeIsSet() const;
    void unsetprotocolType();
    void setProtocolType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PublicAwLibRes getPublicAwLib() const;
    bool publicAwLibIsSet() const;
    void unsetpublicAwLib();
    void setPublicAwLib(const PublicAwLibRes& value);

    /// <summary>
    /// 所属公共aw库Id
    /// </summary>

    std::string getPublicAwLibId() const;
    bool publicAwLibIdIsSet() const;
    void unsetpublicAwLibId();
    void setPublicAwLibId(const std::string& value);

    /// <summary>
    /// 区域名称
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 返回类型
    /// </summary>

    std::string getReturnType() const;
    bool returnTypeIsSet() const;
    void unsetreturnType();
    void setReturnType(const std::string& value);

    /// <summary>
    /// root id
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// 来源
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 特殊AW类型 0-common,10-header,1-beforeHeader
    /// </summary>

    int32_t getSpecialType() const;
    bool specialTypeIsSet() const;
    void unsetspecialType();
    void setSpecialType(int32_t value);

    /// <summary>
    /// 关键字管理的用例编号
    /// </summary>

    std::string getTmssCaseNumber() const;
    bool tmssCaseNumberIsSet() const;
    void unsettmssCaseNumber();
    void setTmssCaseNumber(const std::string& value);

    /// <summary>
    /// 关键字aw管理的用例ID
    /// </summary>

    std::string getTmssCaseId() const;
    bool tmssCaseIdIsSet() const;
    void unsettmssCaseId();
    void setTmssCaseId(const std::string& value);

    /// <summary>
    /// 总页数
    /// </summary>

    int32_t getTotalPage() const;
    bool totalPageIsSet() const;
    void unsettotalPage();
    void setTotalPage(int32_t value);

    /// <summary>
    /// 总条数
    /// </summary>

    int32_t getTotalSize() const;
    bool totalSizeIsSet() const;
    void unsettotalSize();
    void setTotalSize(int32_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 更新时间戳
    /// </summary>

    int64_t getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(int64_t value);

    /// <summary>
    /// 更新字符串
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
    /// 警告信息
    /// </summary>

    std::string getWarningMsg() const;
    bool warningMsgIsSet() const;
    void unsetwarningMsg();
    void setWarningMsg(const std::string& value);

    /// <summary>
    /// 所属yaml文件名称,该字段不存库，用来记录从哪个yaml文件导入
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
    std::vector<AwInstanceRes> awInsList_;
    bool awInsListIsSet_;
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
    int32_t cataType_;
    bool cataTypeIsSet_;
    std::vector<BasicAWInfo>* childList_;
    bool childListIsSet_;
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
    std::vector<UploadFileRes> customAwLibs_;
    bool customAwLibsIsSet_;
    std::string deleteTime_;
    bool deleteTimeIsSet_;
    std::string deleteUser_;
    bool deleteUserIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<CheckPoint> dftCheckPointList_;
    bool dftCheckPointListIsSet_;
    std::vector<AwParam> dftCustomHeader_;
    bool dftCustomHeaderIsSet_;
    std::string dftRetryInterval_;
    bool dftRetryIntervalIsSet_;
    std::string dftRetryTimes_;
    bool dftRetryTimesIsSet_;
    std::vector<AwVariable> dftVariableList_;
    bool dftVariableListIsSet_;
    JsonNode extraInfo_;
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
    std::string isFolder_;
    bool isFolderIsSet_;
    std::vector<AwVariable> keywordVariableValue_;
    bool keywordVariableValueIsSet_;
    std::string method_;
    bool methodIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameView_;
    bool nameViewIsSet_;
    std::string originProject_;
    bool originProjectIsSet_;
    std::vector<AwVariable> outputParamList_;
    bool outputParamListIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::vector<AwParam> paramTypeAndDftValue_;
    bool paramTypeAndDftValueIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string protocolType_;
    bool protocolTypeIsSet_;
    PublicAwLibRes publicAwLib_;
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
    int32_t totalPage_;
    bool totalPageIsSet_;
    int32_t totalSize_;
    bool totalSizeIsSet_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicAWInfo_H_
